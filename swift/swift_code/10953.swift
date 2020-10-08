//
//  10953.swift
//  swift_code
//
//  Created by AEIK on 2020/10/06.
//

import Foundation

func _10953() -> Void {
    
    let T = Int(readLine() ?? "") ?? 0
    
    for _ in 0..<T {
        
        let str = readLine() ?? ""
        let splitArr = str.split(separator: ",").map{ Int($0) ?? 0 }
        print(splitArr[0] + splitArr[1])
    }
}

_10953()
