//
//  9012.swift
//  swift_code
//
//  Created by AEIK on 2020/09/30.
//

import Foundation

struct Stack<T> {
    var stack = [T]()
    
    func isEmpty() -> Bool {
        return stack.isEmpty
    }
    func top() -> T? {
        return stack.last
    }
    mutating func push(_ a: T) {
        stack.append(a)
    }
    mutating func pop() {
        stack.removeLast()
    }
}

func _9012() {
    
    if let N = Int(readLine() ?? "") {
        
        for _ in 0..<N {
            
            var valid: Bool = true
            var stack = Stack<String>()
            
            if let str = readLine()?.map({ String($0) }) {
                
                for i in str {
                    
                    if i == "(" {
                        stack.push(i)
                    } else if i == ")" {
                        if stack.isEmpty() {
                            stack.push(i)
                            valid = false
                        } else {
                            stack.pop()
                        }
                    }
                }
                
                if stack.isEmpty() && valid {
                    print("YES")
                } else {
                    print("NO")
                }
            }
        }
    }
}

_9012()

