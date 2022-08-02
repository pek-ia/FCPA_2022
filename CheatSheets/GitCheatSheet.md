# Git and GitHub command cheat sheet
## Updated January 24, 2022

## Setting up your configuration

```
git config --global user.name “[firstname lastname]”
git config --global user.email “[valid-email]”

git config --global core.editor "[editor-command]"

git config --list --show-scope
```


## init

Create a new local repository

```
$ mkdir [repo-name]
$ cd [repo-name]
$ git init
```

## clone

Clone always creates a new repository that is a copy of an existing one.  If you clone a remote repository to your own machine, git will remember the remote repo as the "origin"

Clone a remote repository -> local repository with the same name

```
$ git clone [remote_url]
```

Clone but change the new project name/directory

```
$ git clone [repository_path] [new_repository_path]
```

Clone but get only the latest revision

```
$ git clone --depth 1 [repository_path]
```


## add

Add a file or directory to the next commit

```
$ git add [filename]
```

Register the changed files from the file that is committed to the index

```
$ git add -u
```

Registered for all the modified file index  (file newly added is not included)

```
$ git add -A
```

Add all changed files to next commit

```
$ git add .
```

## commit

Commit files that have been staged

```
$ git commit
```

Commit current changes with the commit message

```
$ git commit -m "comment"
```

Commit to add to all the changed files index  (file newly added is not included)

```
$ git commit -a
```

Modify the last commit

```
$ git commit --amend
```

## restore


Restore a file to its last committed state

```
git restore [filename]
```

## branch

Create a new branch

```
$ git branch [branch]
```

Display a list of branches

```
$ git branch
```

Display all branches

```
$ git branch -a
```

Display the remote branch

```
$ git branch -r
```

Delete a branch

```
$ git branch -d [branch]
```

## checkout

Switches to a branch; does not really "check out" the files.  They are already there in your Working Area

```
$ git checkout [branch]
```

Create a new branch and switch to it

```
$ git checkout -b [branch]
```

## diff, status

Display the differences of changed files

```
$ git diff
```

Display a list of changed files

```
$ git status
```



## log, show

Display the commit log

```
$ git log
```

Display the latest commit content

```
$ git show
```

## reset

Cancel the last commit  (but leave current contents intact)

```
$ git reset --soft HEAD^
```

Cancel the contents and commit of the last commit

```
$ git reset --hard HEAD^
```

## push

push the local repository to the remote repository

```
$ git push [remote] [branch]
```

push the main of the local repository to the main of the remote repository

```
$ git push origin main
```

## pull-request

Send a pull request

```
$ git pull-request
```

Commit the file with the message of the pull request

```
$ git pull-request -m "[comment]" -b defunkt:master -h mislav:feature
```

## merge

Merge the branch

```
$ git merge [branch]
```

## fetch, pull

Fetch the history of the remote repository

```
git fetch [remote]
```

Pull the content from the remote repository

```
$ git pull [remote]
```

## cherry-pick

Copy the commit of another branch to the current branch

```
$ git cherry-pick [commit id]
```

## browse, open

Open a page of the project of GitHub

```
$ git browse
```
```
$ open https://github.com/USER_NAME/REPOSITORY_NAME
```

Open a page of the issues of the project of GitHub

```
$ git browse -- issues
```
```
$ open https://github.com/USER_NAME/REPOSITORY_NAME/issues
```

Opening the wiki pages of the project of GitHub

```
$ git browse -- wiki
```
```
$ open https://github.com/USER_NAME/REPOSITORY_NAME/wiki

## remove a file or directory from working tree and index

git rm [filename]
git rm -r [dirname]

git remote -v

git push -u origin main

```











