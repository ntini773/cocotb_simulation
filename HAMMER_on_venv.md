## 🛠️ Setting up Hammer in a Virtual Environment (Python 3.10)

This project uses the **Hammer ⇆ Spike** co-simulation interface. Follow these steps to build and run the project inside a Python 3.10 virtual environment.

### ✅ Prerequisites

- Python **3.10** (important: Hammer must be built with the same version)
- Spike (installed and built beforehand)
- Hammer built at: `/home/nitin/merl-hammer-deps/hammer/builddir`

---

### ⚙️ Steps

```bash
# 1. Create a Python 3.10 virtual environment
python3.10 -m venv final

# 2. Add Hammer to PYTHONPATH automatically when activating
echo 'export PYTHONPATH=/home/nitin/merl-hammer-deps/hammer/builddir:$PYTHONPATH' > final/bin/activate.d/hammer.sh
chmod +x final/bin/activate.d/hammer.sh

# 3. Activate the environment
source final/bin/activate

# 4. Install project dependencies
pip install -r requirements_cur.txt

# 5. Run your test / co-sim Python
cd top_tracing_simulation/
python3 ham.py ./ibex_load_instr_test_0.o
```


### 📌 Notes

* Do **not** `pip install` Hammer – just exporting `PYTHONPATH` is enough.
* The `.so` file is used in-place from the Hammer `builddir`.
* The virtual environment can live anywhere; Hammer does **not** need to be cloned inside the repo.
* Ensure Hammer is built with the **same Python version** (3.10) as the virtualenv.
