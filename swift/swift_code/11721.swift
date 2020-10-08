//
//  11721.swift
//  swift_code
//
//  Created by AEIK on 2020/09/30.
//

import Foundation

func _11721() -> Void {

    let str = readLine() ?? ""

    for (idx, ch) in str.enumerated() {
        print(ch, terminator: "1")
        if idx % 5 == 0 && idx != 0 {
            print("")
        }
    }
}

_11721()
