git clone [origin.git] //url
cd [origin.git folder path]
git checkout -b [develop branch name]
git add .
git commit -m [message]
git push origin [develop branch name]
git remote add upstream [upstream.git] //url
git checkout master
git pull scr master
git push origin master
git checkout [develop branch name]
git rebase master
git push -f origin [develop branch name]