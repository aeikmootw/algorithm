//
//  9251.swift
//  swift_code
//
//  Created by AEIK on 2020/10/08.
//

import Foundation

let str1 = Array(readLine()!)
let str2 = Array(readLine()!)

var dp: [[Int]] = Array(repeating: Array(repeating: -1, count: str2.count), count: str1.count)

func solve(_ a: Int, _ b: Int) -> Int {
    
    if (a == str1.count) || (b == str2.count) {
        return 0
    }
    
    if str1[a] == str2[b] {
        return 1 + solve(a + 1, b + 1)
    }
    
    if dp[a][b] != -1 { return dp[a][b] }
    dp[a][b] = max(solve(a, b + 1), solve(a + 1, b))
    return dp[a][b]
}

func _9251() -> Void {
    print(solve(0, 0))
}
_9251()
