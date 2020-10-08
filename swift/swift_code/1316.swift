//
//  1316.swift
//  swift_code
//
//  Created by AEIK on 2020/09/30.
//

import Foundation

func _1316() -> Void {
    
    let N = Int(readLine() ?? "") ?? 0
    var answer = 0
    
    for _ in 0..<N {
        
        var arr: [Character] = []
        let str = readLine() ?? ""
        
        for i in str {
            
            if !arr.contains(i) {
                arr.append(i)
            } else if arr.last! != i {
                arr.removeAll()
                break
            }
        }
        if arr.count != 0 { answer += 1 }
    }
    print(answer)
}

_1316()
