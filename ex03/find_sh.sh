find . -type f -name '*.sh' | sed -e 's/.sh$//g' | sed 's|.*/||'
#find . -type f -name "*.sh" -exec basename {} \; | sed -e 's/.sh$//g'
