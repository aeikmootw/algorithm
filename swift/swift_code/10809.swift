//
//  10809.swift
//  swift_code
//
//  Created by AEIK on 2020/09/30.
//

import Foundation

func _10809() -> Void {
    
    var alpabet: [Int] = [-1, -1, -1, -1, -1,
                          -1, -1, -1, -1, -1,
                          -1, -1, -1, -1, -1,
                          -1, -1, -1, -1, -1,
                          -1, -1, -1, -1, -1, -1]


    var str = readLine() ?? ""

    var position = 0
    for i in str.utf8 {
        let idx = Int(i) - 97
        
        if alpabet[idx] == -1 {
            alpabet[idx] = position
            position+=1
        } else {
            position+=1
        }
    }

    for i in alpabet {
        print("\(i) ", terminator: "")
    }
}

_10809()
