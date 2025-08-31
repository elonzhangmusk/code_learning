# code_learning

This repository is about code learning ,you can see like cpp and so on.

<https://markdown.com.cn/basic-syntax/emphasis.html>  
This is markdown's guide.

## How to use GitHub

<https://blog.csdn.net/black_sneak/article/details/139600633>
This blog is written for how to use GitHub, you can see the idea on it.  
For me, following is some useful keys.  

1.Clone the codes.  
-

```bash
git clone ~
```

~  :  your GitHub's respository' SSH.

2.git add
-

```bash
git add .
```

3.commit
-

```bash
git commit -m “测试是否成功        #这个引号内容就是提示词
```

4.git
-

```bash
git push origin main
```

## How to use uv env

If you want not to use 'conda' ,you can try uv .
It can be more quick .

## 1. start

uv can be use in both win and linux .

### win

```
irm https://astral.sh/uv/install.ps1 | iex
```

### linux/macos

```
curl -LsSf https://astral.sh/uv/install.sh | sh
```

## 2. use

```
uv venv --python 3.10
```

## 3.activate

### win

```
.\.venv\Scripts\Activate.ps1  # 或 .venv\Scripts\activate
```

### linux

```
source .venv/bin/activate
```

## 4
