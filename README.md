# Neutrino 2026 GitLog

## Software
```bash
sl7_c
source ~/.bash_profile
source /cvmfs/dune.opensciencegrid.org/products/dune/setup_dune.sh
setup dunesw v10_20_06d00 -q e26:prof
```

### Merge plots into one pdf file
```python
pip3 install img2pdf
python3 -m img2pdf *.png -o ~/Desktop/e.pdf
```


## Building Pandora PFA
### Working area
In `dunegpvm10`,
```bash
ssh -AKXY dunebuild03
/cvmfs/oasis.opensciencegrid.org/mis/apptainer/current/bin/apptainer shell --shell=/bin/bash --env PS1="(COT)[\H@\w]$" -B /cvmfs,/exp,/nashome,/opt,/run/user,/etc/hostname,/etc/hosts,/etc/krb5.conf --ipc --pid /cvmfs/singularity.opensciencegrid.org/fermilab/fnal-dev-sl7:latest

mkdir -p /exp/dune/app/users/$USER/n26ws
mkdir -p /exp/dune/data/users/$USER/n26ws

cd /exp/dune/app/users/$USER/n26ws
source /cvmfs/dune.opensciencegrid.org/products/dune/setup_dune.sh
setup larsoft v10_20_06 -q e26:prof
mrb newDev
source localProducts_larsoft_v10_20_06_e26_prof/setup


```
### Checkout dunesw and LArPandora Content
```bash
mrb g dunesw larpandoracontent
cd $MRB_SOURCE/dunesw
git checkout npcworkshop_may2026
cd $MRB_SOURCE/larpandoracontent
git remote add pandora https://github.com/PandoraPFA/LArContent.git
git fetch pandora
git checkout pandora/feature/npc_cluster
git checkout -b feature/npc_cluster pandora/feature/npc_cluster

```
### mrb Setup Environment
In `.../n26ws/srcs/dunesw`,

```bash
mrbsetenv
```

Now build!
```bash
mrb install -j 32
```
### mrb setup local products
```bash
mrbslp
```
