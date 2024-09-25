# Immersive Stream XR Precompiled Binary Example Plugin

This repository demonstrates the use of precompiled binaries for an Unreal Engine plugin in an Immersive Stream XR project. The example includes both the original plugin source and the precompiled version to help troubleshoot build issues when using precompiled binaries with Immersive Stream XR.

## Repository Structure

The repository contains the following folders:

### 1. `PrebuiltBinaries`
- Contains the original plugin source code (uncompiled).
- This version is intended for use with standard Unreal Engine workflows.
- You can open and build this plugin as you would with any other Unreal Engine plugin.

### 2. `PrebuiltBinariesCompiled`
- Contains the same plugin files as `PrebuiltBinaries`, but with precompiled binaries included.
- The `.uplugin` and `.build.cs` files have been modified to indicate that the plugin should use the precompiled binaries.
- The `Binaries` and `Intermediate` folders are included in this version.

## How to Use

1. **To work with the uncompiled version:**
   - Use the contents of the `PrebuiltBinaries` folder.
   - Add the folder to your Unreal Engine project’s `Plugins` directory.
   - Open your Unreal project and build as usual.

2. **To work with the precompiled version:**
   - Use the contents of the `PrebuiltBinariesCompiled` folder.
   - Add this folder to your Unreal Engine project’s `Plugins` directory.
   - Ensure your project is set up to recognize precompiled plugins.

## Notes

- This example demonstrates how to structure and configure a plugin to work with precompiled binaries in an Immersive Stream XR project.
- The modifications made to the `.uplugin` and `.build.cs` files in `PrebuiltBinariesCompiled` ensure that the Unreal Engine correctly identifies and uses the precompiled binaries.

If you encounter any issues or have questions, feel free to reach out.
