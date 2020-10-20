//
//  10773.swift
//  swift_code
//
//  Created by AEIK on 2020/10/08.
//

import Foundation

func _10773() -> Void {
    
    let K = Int(readLine() ?? "") ?? 0
    var arr: [Int] = []
    
    for _ in 0..<K {
        
        let input = Int(readLine() ?? "") ?? 0
        
        if input == 0 {
            arr.removeLast()
        } else {
            arr.append(input)
        }
    }
    
    var sum = 0
    for i in 0..<arr.count {
        sum += arr[i]
    }
    print(sum)
}

_10773()
