//
//  MetalCubeApp.swift
//  MetalCube
//
//  Created by Mohak Tamhane on 2/21/26.
//

import SwiftUI

@main
struct MetalCubeApp: App {
    var body: some Scene {
        WindowGroup {
            MetalCube()
        }
        .windowStyle(.volumetric)
    }
}
