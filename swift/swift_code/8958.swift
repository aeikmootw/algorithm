//
//  8958.swift
//  swift_code
//
//  Created by AEIK on 2020/09/23.
//

import Foundation

func _8958() -> Void {
    
    let N = Int(readLine() ?? "") ?? 0
    var result = 0
    
    for _ in 0..<N {
        
        let inputStr = readLine() ?? ""
        var cnt = 0
        var cntSum = 0
        
        for c in inputStr {
            if c == "O" {
                cnt += 1
                cntSum += cnt
            } else {
                cnt = 0
            }
        }
        print(cntSum)
    }
}

_8958()
