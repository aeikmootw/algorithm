//
//  1100.swift
//  swift_code
//
//  Created by AEIK on 2020/10/08.
//

import Foundation

func _1100() {
    
    var arr: [[Character]] = []
    
    for _ in 0..<8 {
        let strr = Array(readLine()!)
        arr.append(strr)
    }
    
    var cnt = 0
    
    for i in 0..<8 {
        for j in 0..<8 {
            if arr[i][j] == "F" {
                if (i % 2 == 0) && (j % 2 == 0){
                    cnt += 1
                } else if (i % 2 == 1) && (j % 2 == 1){
                    cnt += 1
                }
            }
        }
    }
    
    print(cnt)
    
    
    
}

_1100()
