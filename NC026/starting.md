# Starting from a NERSC python node and put the following into a cell in a ipynb and run it. 
```python
%%capture
!pip install jupyter matplotlib h5py numpy legacy-cgi scienceplots
!cd ../.. && git clone https://github.com/DUNE/h5flow && pip install -e ./h5flow
!cd .. && pip install -e .
```
