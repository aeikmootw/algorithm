//
//  10808.swift
//  swift_code
//
//  Created by AEIK on 2020/10/06.
//

import Foundation

func _10808() -> Void {
    
    var alphaCnt: [Int] = Array(repeating: 0, count: 26)
    
    let str = readLine() ?? ""
    
    for char in str {
        
        alphaCnt[Int(char.asciiValue!) - 97] += 1
        
    }
    for i in 0..<26 {
        print("\(alphaCnt[i]) ", terminator: "")
    }
}

_10808()
