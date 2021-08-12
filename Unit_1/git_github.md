## Github
# by Eduardo Flores

# what is github?
github is a software in which you can upload your project and access in others devices and other collages in teams.

# github command line

# git init
git init is used to init a repository to your project this you need write this command in the folder

```sh
git init
```
# git add
if you want to upload your files you need put git add + file

```sh
git add git_github.md
```
# git remote
If you want connect with one repository you need use the command remote 

```sh
git remote add origin <url>
```
# git commit
one step important is make a commit, when you go to upload updates, you need put a message and this is with a commit this need be different
````sh
git commit -m "message"
````
# git status
Git status work to see what file is done to upload is like a photo
````sh
git status
````
# git push 
now, to upload your update, you need to put the command push to the files upload at the repository.

````sh
git push origin main
````

# git pull
before to start, you need to do a pull to has the last update of your project
````sh
git pull -r origin main
````
-----------------------------------------------------------------------------------------
# how to create a repository
Now I'm going to explain how to create your repository. First You need have one account on github, after create a repository there. Now on your terminal, create a repository where
you work the project. 
here you need to follow the next step:
````sh
git init 
nano README.md
````
with this You inialized the repository and create one markdown file.
````sh
git remote add origin <url>
git branch <name-branch>
````
now, you connect with the repository put the url and create a branch where the project upload.

````sh
git add *
git status
````
with git add you preparate the files to upload the * work to choose all files but you can write the name file. and the command git status you can watch if the file is chargerd
````sh
git commit -m "your message"
git push origin main
````
with the commit prepared the file with a message to upload the document and push you upload at the repository. 
Now you can see on github your files.

now, when you work on your project before to work, you need to do the pull to has the las update. go at your folder and write the next command
````sh
git pull -r origin main
````
with that you download the update and you can work.
