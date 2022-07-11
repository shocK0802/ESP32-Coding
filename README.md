# esp32-learning-real

## To export codes from windows to Linux, I need these command in git bash.

```bash
git branch	        #to find branches I have

git branch dev1	        #new a branch dev1(also, It can be used to add a branch like "test-esp32")

git switch dev1	        #switch to a new branch 

git status	        #to figure out untraced files (use "git add <file>..." to include in what will be committed)

git add ./	        #add all changes in the folder we've in

git commit -m "~~~" 	#write commits

git push origin dev1	#push the codes to git
```

## If I need refresh my repository

copy the codes :

```bash
git add ./
git commit -m "~~~"
git push
```
## If I want to pull my repository
copy the codes  :
```bash

```

## 1.If It's going wrong like
```bash
    OpenSSL SSL_read: Connection was aborted, errno 10053
```
then:
```bash
    git config --global http.postBuffer 524288000

    git config http.sslVerify "false"
```

## 2.If It's going wrong like
```bash
    Failed to connect to github.com port 443 after 21029 ms: Timed out
```
then:
```bash
    git config --global --unset http.proxy
    git config --global --unset https.proxy
```
## Get started
1.press F1 to show the sample code in ESP-IDF