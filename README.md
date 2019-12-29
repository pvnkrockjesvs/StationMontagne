# Station de Montagne - Groupe 3

Groupe péchu

Create a new repository
git clone git@gitlab.com:SNIR-GRETA/Projet.git
cd Projet
touch README.md
git add README.md
git commit -m "add README"
git push -u origin master

Existing folder
cd existing_folder
git init
git remote add origin git@gitlab.com:SNIR-GRETA/2018-2019.git
git add .
git commit -m "Initial commit"
git push -u origin master

Existing Git repository
cd existing_repo
git remote rename origin old-origin
git remote add origin git@gitlab.com:SNIR-GRETA/2018-2019.git
git push -u origin --all
git push -u origin --tags