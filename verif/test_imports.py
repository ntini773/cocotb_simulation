#!/usr/bin/env python3

"""
Simple unit test to verify PyUVM components can be imported
"""

import sys
from pathlib import Path

# Add paths
sys.path.insert(0, str(Path("./env").resolve()))
sys.path.insert(0, str(Path("./agents/spike_agent").resolve()))
sys.path.insert(0, str(Path("./utils").resolve()))

def test_imports():
    """Test if all components can be imported"""
    
    print("Testing imports...")
    
    try:
        # Test pyuvm import
        import pyuvm
        print("✓ PyUVM imported successfully")
    except ImportError as e:
        print(f"✗ PyUVM import failed: {e}")
        return False
    
    try:
        # Test environment import
        from environment import environment
        print("✓ Environment imported successfully")
    except ImportError as e:
        print(f"✗ Environment import failed: {e}")
        return False
    
    try:
        # Test spike agent import
        from spike_agent import spike_agent
        print("✓ Spike agent imported successfully")
    except ImportError as e:
        print(f"✗ Spike agent import failed: {e}")
        return False
    
    try:
        # Test spike monitor import
        from spike_monitor import spike_monitor
        print("✓ Spike monitor imported successfully")
    except ImportError as e:
        print(f"✗ Spike monitor import failed: {e}")
        return False
    
    try:
        # Test RVFI interface import
        from rvfi_if import RVFI_Interface
        print("✓ RVFI Interface imported successfully")
    except ImportError as e:
        print(f"✗ RVFI Interface import failed: {e}")
        return False
    
    try:
        # Test memory model import
        from memory_model import MemoryModel
        print("✓ Memory model imported successfully")
    except ImportError as e:
        print(f"✗ Memory model import failed: {e}")
        return False
    
    return True

def test_basic_instantiation():
    """Test if basic components can be instantiated"""
    
    print("\nTesting basic instantiation...")
    
    try:
        from memory_model import MemoryModel
        mem = MemoryModel()
        print("✓ Memory model instantiated successfully")
    except Exception as e:
        print(f"✗ Memory model instantiation failed: {e}")
        return False
    
    return True

if __name__ == "__main__":
    print("Running basic component tests...\n")
    
    imports_ok = test_imports()
    instantiation_ok = test_basic_instantiation()
    
    if imports_ok and instantiation_ok:
        print("\n✓ All basic tests passed!")
        sys.exit(0)
    else:
        print("\n✗ Some tests failed!")
        sys.exit(1)
