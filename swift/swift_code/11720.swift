//
//  11720.swift
//  swift
//
//  Created by AEIK on 2020/09/22.
//

import Foundation

func _11720() -> Void {
    
    let line = readLine() ?? ""
    let x = Int(line) ?? 0
    let input = Array(readLine() ?? "")
    var result = 0
    for item in 0..<x {
        result += Int(String(input[item])) ?? 0
    }
    print(result)
}

_11720()
