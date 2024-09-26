# Immersive Stream XR Precompiled Binary Example Plugin

This repository demonstrates the use of precompiled binaries for an Unreal Engine plugin in an Immersive Stream XR (ISXR) project. The example includes both the original plugin source and the precompiled version, along with two template projects to help troubleshoot build issues when using precompiled binaries with Immersive Stream XR.

## Compatibility

- The plugin has been compiled using **Unreal Engine 5.3**.
- The precompiled binaries are compatible with any Unreal Engine 5.3 projects on **Windows 64-bit** and **Linux** platforms.

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
- **Note**: These binaries are compatible with Unreal Engine 5.3 projects on both Windows 64-bit and Linux.

### 3. `Unreal_Template_Project`
- A template Immersive Stream XR project that includes the `PrebuiltBinaries` plugin with full source code.
- Includes the standard **Immersive Stream XR template content** and a new **default map**.
- The default map contains an actor that reads and displays an `FString` from a function within the `BinaryShareObject.cpp` class.
- The `Source` directory has been included with the necessary barebones Unreal Engine source files.
- The `XR_Template.uproject` has been configured to include the `BinaryTest` module, enabling the generation of a solution file (`.sln`) so that the plugin can be built within the Unreal Editor.

### 4. `Unreal_Template_Project_CompiledPlugin`
- A template Immersive Stream XR project that includes the `PrebuiltBinariesCompiled` plugin, which contains only the precompiled binaries.
- Includes the standard **Immersive Stream XR template content** and a new **default map**.
- The default map contains an actor that reads and displays an `FString` from a function within the `BinaryShareObject.cpp` class.
- The `.cpp` source code is not included in this version, allowing you to test how the precompiled plugin integrates with an ISXR project.

## How to Use

### Working with the Plugin Directly:
1. **Uncompiled Version:**
   - Use the contents of the `PrebuiltBinaries` folder.
   - Add the folder to your Unreal Engine project’s `Plugins` directory.
   - Open your Unreal project and build as usual.

2. **Precompiled Version:**
   - Use the contents of the `PrebuiltBinariesCompiled` folder.
   - Add this folder to your Unreal Engine project’s `Plugins` directory.
   - Ensure your project is set up to recognize precompiled plugins.

### Using the Template Projects:
1. **`Unreal_Template_Project`**:
   - Open this project if you want to test the plugin with full source code included.
   - The project includes the standard Immersive Stream XR template content.
   - The default map contains an actor that reads and displays an `FString` from a function in `BinaryShareObject.cpp`.
   - The `BinaryTest` module is included in the `XR_Template.uproject` file, allowing the generation of a solution file so that the plugin can be built within the Unreal Editor.

2. **`Unreal_Template_Project_CompiledPlugin`**:
   - Open this project to test with the precompiled version of the plugin.
   - This version includes the standard Immersive Stream XR template content, along with a default map that contains an actor displaying an `FString` from `BinaryShareObject.cpp`.
   - This version is ideal for testing the precompiled plugin in an ISXR environment without access to the source code.

## Notes

- This example demonstrates how to structure and configure a plugin to work with precompiled binaries in an Immersive Stream XR project.
- The modifications made to the `.uplugin` and `.build.cs` files in `PrebuiltBinariesCompiled` ensure that the Unreal Engine correctly identifies and uses the precompiled binaries.

If you encounter any issues or have questions, feel free to reach out.
