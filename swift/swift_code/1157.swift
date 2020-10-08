//
//  1157.swift
//  swift_code
//
//  Created by AEIK on 2020/09/30.
//

import Foundation

func _1157() -> Void{
    
    let alphabetArr = "ABCDEFGHIJKLMNOPQRSTUVWXYZ".map { String($0) }
    
    var alphabetCnt = [Int](repeating: 0, count: 26)
    let str = readLine() ?? ""
    
    for ch in str {
        
        switch String(ch) {
        case "A", "a":
            alphabetCnt[0] += 1
            break
        case "B", "b":
            alphabetCnt[1] += 1
            break
        case "C", "c":
            alphabetCnt[2] += 1
            break
        case "D", "d":
            alphabetCnt[3] += 1
            break
        case "E", "e":
            alphabetCnt[4] += 1
            break
        case "F", "f":
            alphabetCnt[5] += 1
            break
        case "G", "g":
            alphabetCnt[6] += 1
            break
        case "H", "h":
            alphabetCnt[7] += 1
            break
        case "I", "i":
            alphabetCnt[8] += 1
            break
        case "J", "j":
            alphabetCnt[9] += 1
            break
        case "K", "k":
            alphabetCnt[10] += 1
            break
        case "L", "l":
            alphabetCnt[11] += 1
            break
        case "M", "m":
            alphabetCnt[12] += 1
            break
        case "N", "n":
            alphabetCnt[13] += 1
            break
        case "O", "o":
            alphabetCnt[14] += 1
            break
        case "P", "p":
            alphabetCnt[15] += 1
            break
        case "Q", "q":
            alphabetCnt[16] += 1
            break
        case "R", "r":
            alphabetCnt[17] += 1
            break
        case "S", "s":
            alphabetCnt[18] += 1
            break
        case "T", "t":
            alphabetCnt[19] += 1
            break
        case "U", "u":
            alphabetCnt[20] += 1
            break
        case "V", "v":
            alphabetCnt[21] += 1
            break
        case "W", "w":
            alphabetCnt[22] += 1
            break
        case "X", "x":
            alphabetCnt[23] += 1
            break
        case "Y", "y":
            alphabetCnt[24] += 1
            break
        case "Z", "z":
            alphabetCnt[25] += 1
            break
        default:
            break
        }
    }
    let sorted = alphabetCnt.sorted()
    
    if sorted[24] == sorted[25] {
        print("?")
    } else {
        for (idx, ch) in alphabetCnt.enumerated() {
            if ch == sorted[25] {
                print(alphabetArr[idx])
            }
        }
    }
}
_1157()

