//
//  2941.swift
//  swift_code
//
//  Created by AEIK on 2020/10/04.
//

import Foundation

func _2941() -> Void {
    
    let alphabet: [String] = ["c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="]
    
    var str = readLine() ?? ""
    
    for i in 0..<alphabet.count {
        str = str.replacingOccurrences(of: alphabet[i], with: "a")
    }
    print(str.count)
}

_2941()
