#!/usr/bin/env python3

"""
Test runner for PyUVM basic functionality
Run this to verify imports and basic setup before running full simulation
"""

import sys
import os
from pathlib import Path

# Add project paths
project_root = Path(__file__).parent
sys.path.insert(0, str(project_root / "env"))
sys.path.insert(0, str(project_root / "agents" / "spike_agent"))
sys.path.insert(0, str(project_root / "utils"))

def test_basic_imports():
    """Test if all required modules can be imported"""
    
    print("Testing PyUVM testbench imports...")
    print("=" * 50)
    
    try:
        import pyuvm
        print("✓ PyUVM imported successfully")
        print(f"  PyUVM version: {pyuvm.__version__ if hasattr(pyuvm, '__version__') else 'Unknown'}")
    except ImportError as e:
        print(f"✗ PyUVM import failed: {e}")
        return False
    
    try:
        import cocotb
        print("✓ Cocotb imported successfully")
        print(f"  Cocotb version: {cocotb.__version__ if hasattr(cocotb, '__version__') else 'Unknown'}")
    except ImportError as e:
        print(f"✗ Cocotb import failed: {e}")
        return False
    
    try:
        from environment import environment
        print("✓ Environment class imported successfully")
    except ImportError as e:
        print(f"✗ Environment import failed: {e}")
        print(f"  Current working directory: {os.getcwd()}")
        print(f"  Python path: {sys.path}")
        return False
    
    try:
        from spike_agent import spike_agent
        print("✓ Spike agent imported successfully")
    except ImportError as e:
        print(f"✗ Spike agent import failed: {e}")
        return False
    
    try:
        from spike_monitor import spike_monitor
        print("✓ Spike monitor imported successfully")
    except ImportError as e:
        print(f"✗ Spike monitor import failed: {e}")
        return False
    
    try:
        from rvfi_if import RVFI_Interface
        print("✓ RVFI Interface imported successfully")
    except ImportError as e:
        print(f"✗ RVFI Interface import failed: {e}")
        return False
    
    try:
        from memory_model import MemoryModel
        print("✓ Memory model imported successfully")
    except ImportError as e:
        print(f"✗ Memory model import failed: {e}")
        return False
    
    print("=" * 50)
    print("✓ All imports successful!")
    return True

def main():
    """Main function"""
    print("PyUVM Testbench Import Checker")
    print("=" * 50)
    
    if test_basic_imports():
        print("\n✓ Ready to run PyUVM tests!")
        print("Run: make")
        return 0
    else:
        print("\n✗ Import errors detected. Please fix before running tests.")
        return 1

if __name__ == "__main__":
    sys.exit(main())
