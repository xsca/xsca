``` ts
import xscf

const xscf.xsca.info = {
  name: 'Corss-Side Communication Agent',
  version: '1.13.23.10',
  sine: 2011,
  lang: 'go',
  location: 'Asia, China',
  readme: 'Xsca is a cross platform communication proxy software based on digital certificate security authentication',
  module: [
    'SSH', 'SFTP', 'DNS', 'TCP', 'UDP', 'TCP-Forward', 'UDP-Forward',
    'MQTT', 'HTTP', 'CA', 'IP', 'WEB', 'Nat-Traversal', 'Socks5-Proxy',....
  ],
  os: [
    'Windows', 'macOS', 'Linux', 'ios', 'Android', 'BSD', 'FreeBSD'
  ],
  platforms: [
    'amd64', '386', 'arm5', 'arm6', 'arm7', 'arm64', 'ppc64le',
    'mips', 'riscv64', 'mips', 'mips64', 'mipsle', 'mips64le',....
  ],
  tag: [
    'Safe', 'Stable', 'Spring', 'Strong', 'Fast'
  ],
  repo: '/xsca'
};
```

### 简介

Corss-Side Communication Agent - 跨区域通信代理系统是一款基于端到端数字证书验证的数据安全传输网络中间件产品。

能够快速的以更低成本和风险获得信息数据加密安全传输、网络级的可信身份管理及精细化的日志审计和网络安全事务预警能力。

### 功能

- ✅ VLAN核心 - 数字证书支持 X25519 / P265 ｜ 签发 / 解析 / 验证

- ✅ VLAN核心 - 内置NAT-Traversal - 内网穿透 / 端口转发

- ✅ VLAN核心 - 数据加密传输 - Aes

- ✅ VLAN核心 - 证书私钥加密 - Aes / SM4

- ✅ VLAN核心 - 国密数字证书支持 - SM2 ｜ 签发 / 解析 / 验证

- ✅ VLAN核心 - 数据加密传输 - SM4

- ✅ VLAN扩展 - 完整SSH服务支持 - SFTP / EXEC / SHELL / PROXY / FORWARD

- ✅ VLAN扩展 - 内置Socks5代理 - 免验证 / 多用户

- ✅ VLAN扩展 - 端口转发支持 - TCP / UDP

- ✅ VLAN扩展 - 内置DNS服务 - 节点查询 / 自定义记录 / 上级转发

- ✅ XWEB核心 - 内置HTTP服务 - 静态托管 / 文件管理 / JS云函数（完整ES6+支持 / JSX 支持）

- ✅ XWEB扩展 - 内置轻量数据库 - LRU-TTL（内存）- 快速导入 / 快速导出

- 🧪 XWEB扩展 - XDB 对象存储数据库（持久化/内存） - 快速导入 / 快速导出

- ✅ XWEB扩展 - SMTP邮件发送

- ✅ XWEB扩展 - 系统环境获取 / 文件操作

- ✅ XWEB扩展 - 内置Request库 - HTTP 请求 / 响应

- ✅ XWEB扩展 - TOTP/HOTP 2FA生成 / 核验

- ✅ XWEB扩展 - 异步定时支持 setTimeout / setInterval / clearInterval / clearAllInterval

- ✅ XWEB扩展 - TCP / UDP 监听 / 连接 / 接收 / 发送

- ✅ XWEB扩展 - MySQL / MSSQL / Postgres / SQLite3 / Redis / Oracle 数据库支持 - 支持数据库连接池

- ✅ XWEB扩展 - 支持JS库Require - 本地 / 远程

- ✅ XWEB扩展 - 内置转码支持 - String / Bytes - ToBase64、ToString、ToBytes、ToHEX

- ✅ XWEB扩展 - 内置加解密库 - crypto 支持AES（CBC、ECB、CFB、CTR、GCM、OFB）、RC4 、SM4

- ✅ XWEB扩展 - 内置加密哈希库 - crypto 支持SHA1、SHA224、SHA256、SHA384、SHA512、MD5、Blake2b、Blake2s、SM3、HMAC-MD5、HMAC-SHA1、HMAC-SHA256、HMAC-SHA512

- ✅ XWEB扩展 - 内置压缩库 - zlib 支持GZIP、DEFLATE、INFLATE、BROTLI

- ✅ XWEB扩展 - 系统SHELL调用 - CMD（windows） / SH （other）

- ✅ XWEB扩展 - 阿里云扩展库 - SMS服务 / OSS服务

- 🚧 XWEB扩展 - 内置WebSocket服务 - 客户端 / 服务端

- 🚧 XWEB扩展 - 可视化控制台 - 管理节点 / 管理证书 / 管理配置 / 管理日志 / 管理文件 / 管理数仓 / 管理终端

- 🚧 XWEB扩展 - 内置消息队列 - 订阅 / 发布

- 🚧 VLAN扩展 - 内置MQTT服务 - 订阅 / 发布

- 🚧 VLAN扩展 - 内置Modbus转发 - 采集 / 接收 / 发送

- 🚧 平台功能 - 官方文档 / 官方教程 / 官方案例

### 预备

下载最新版本成品及依赖项 (仅Windows)。
Windows环境需要管理员权限其它操作系统需要Root权限

### 入门

启动前可通过参数初始化某些必要的值，这里我们主要列出一些关键的配置项：

 ● -config 指定配置文件地址/路径或官方渠道的授权编码

  ○ 官方渠道可填写授权编码读取颁发授权

  ○ 若自建管理中心，此处填写实际的配置下发地址

  ○ 通过该参数可以指定启动后从哪里读取配置文件

  ○ 默认情况下Linux和MacOS的路径是 /etc/vlan/config.yml

  ○ 默认情况下Windows系统的路径是 c:\windows\system32\config.yml

 ● -lang 指定日志输出语言

  ○ 默认为 en-US

  ○ en-US 为英文

  ○ zh-CHS 为简体中文

  ○ zh-CHT 为繁体中文

  ○ ja-JP 为日文

  ○ ru-RU 为俄文

  ○ de-DE 为德文

  ○ fr-FR 为法文

  ○ ko-KR 为韩文

  ○ es-ES 为西班牙文

 ● -node 指定节点编号

  ○ 默认为 1000

  ○ 在多节点日志集中审计时，为节点进行编号可避免日志编号相同的问题

 ● -version 查询当前运行版本

 ● -test 测试配置文件是否正常

 ● -service 系统服务控制类

  ○ -service init 初始化配置并安装为系统服务

    - 可搭配 `-config` 参数自定义配置文件路径，否则使用默认配置文件路径

    ■ 可搭配 -lang 参数自定义日志语言，默认： en-US 英语

  ○ -service start 启动服务

    ■ 注意：更新完成后会自动启动

    ■ 可搭配 -config 参数自定义配置文件路径，否则使用默认配置文件路径，若服务已安装，则无需加 -config参数。

### 开始

#### Windows环境

在完成程式 install.exe下载流程后，找到下载完成的程式文件，按照以下操作完成运行初始化。

操作完成后，会出现包含以下内容的安装弹窗，请等待自动完成安装。

``` as
4hojBsxPS43 - 2023-08-19 17:14:57 - [INFO] [Sync] - Checking update - main program
4hojBt1vD8f - 2023-08-19 17:14:57 - [INFO] [Sync] - Inconsistent version comparison
4hojBt2fCLq - 2023-08-19 17:14:57 - [WARNING] [Sync] <name:vlan.exe> - Stoping process
4hojBH4UQ7U - 2023-08-19 17:14:59 - [INFO] [Sync] - Remove old program success
4hojBHCU495 - 2023-08-19 17:14:59 - [INFO] [Sync] - Install current program version
4hojBHE1xAQ - 2023-08-19 17:14:59 - [INFO] [Sync] - Checking update - update program
4hojBLYnrq5 - 2023-08-19 17:15:00 - [INFO] [Sync] - Get update success
4hojBLZtVSQ - 2023-08-19 17:15:00 - [INFO] [Sync] - Inconsistent version comparison
4hojBM1dVw1 - 2023-08-19 17:15:00 - [INFO] [Sync] - Starting download
4hojCcpj719 - 2023-08-19 17:15:03 - [WARNING] [Sync] <name:vlan.exe> - Stoping process
4hojCur4mvo - 2023-08-19 17:15:06 - [INFO] [Sync] - Instell success
4hojCurNm9y - 2023-08-19 17:15:06 - [INFO] [Sync] - Update success
4hojCx1N6Yd - 2023-08-19 17:15:06 - [INFO] [Sync] - Service starting
```

初始化完成以后，我们接下来需要激活网络服务。

0.如果通过使用官方认证中心服务并保存配置请参照以下方式操作：

``` as
vl-update -config [授权码]
```

例如：

``` as
Microsoft Windows [版本 10.0.22621.1413]
(c) Microsoft Corporation。保留所有权利。

C:\Users\Cato> vl-update -config 4hojCx1N6Yd
```

1.如果通过自定义认证中心服务并保存配置请参照以下方式操作：

``` as
vl-update -config your_addr
```

例如：

``` as
Microsoft Windows [版本 10.0.22621.1413]
(c) Microsoft Corporation。保留所有权利。

C:\Users\Cato> vl-update -config https://api.yourdomain.com/user/network/4hojCx1N6Yd
```

2.如果通过使用本地配置文件并安装服务请参照以下方式操作：

``` as
vl-update -config d:\download\myconf.yml
```

例如：

``` as
Microsoft Windows [版本 10.0.22621.1413]
(c) Microsoft Corporation。保留所有权利。

C:\Users\Cato> vl-update -config d:\download\myconf.yml
```

3.指令组合输入完成后，按回车键开始执行。若配置未生效可通过以下指令重加载：

``` as
vlan -service restart
```

例如：

``` as
Microsoft Windows [版本 10.0.22621.1413]
(c) Microsoft Corporation。保留所有权利。

C:\Users\Cato> vlan -service restart
```

4.部署完成

1.通过状态栏查看网络状态

2.通过运行指令查看网络状态

#### Linux和MacOS环境

在完成程式 vlan下载流程后，找到下载完成的程式文件，我们接下来需要激活vlan系统服务。

##### 0.快速部署

快速的完成网络服务初始化，直接执行以下指令即可，其它组合指令请参照以上参数运用方式。

``` as
user@Lab ~/ # sudo ./installer -config  [授权码] -init
```

##### 1.部署完成

通过 ifconfig 或 ip addr 指令可见到 Vlan网络适配器及对应的网络地址

``` as
1: lo: <LOOPBACK,UP,LOWER_UP> mtu 65536 qdisc noqueue state UNKNOWN group default qlen 1000
    link/loopback 00:00:00:00:00:00 brd 00:00:00:00:00:00
    inet 127.0.0.1/8 scope host lo
       valid_lft forever preferred_lft forever
    inet6 ::1/128 scope host 
       valid_lft forever preferred_lft forever
2: eth0: <BROADCAST,MULTICAST,UP,LOWER_UP> mtu 1500 qdisc fq_codel state UP group default qlen 1000
    link/ether 00:16:3e:77:f3:a9 brd ff:ff:ff:ff:ff:ff
    inet 216.24.248.61/25 brd 216.24.248.127 scope global eth0
       valid_lft forever preferred_lft forever
    inet6 2607:f130:0:140::216a:1dfc/64 scope global 
       valid_lft forever preferred_lft forever
    inet6 2607:f130:0:140::7b2d:9cdb/64 scope global 
       valid_lft forever preferred_lft forever
    inet6 2607:f130:0:140::932f:bc91/64 scope global 
       valid_lft forever preferred_lft forever
    inet6 fe80::216:3eff:fe77:f3a9/64 scope link 
       valid_lft forever preferred_lft forever

....

13: Vlan-6-6-1-1: <POINTOPOINT,MULTICAST,NOARP,UP,LOWER_UP> mtu 1300 qdisc fq_codel state UNKNOWN group default qlen 5000
    link/none 
    inet 6.6.1.1/7 scope global Vlan-49SRXawSq
       valid_lft forever preferred_lft forever
    inet6 fe80::fd81:2fc0:891f:ee7d/64 scope link stable-privacy 
       valid_lft forever preferred_lft forever

14: Personal: <POINTOPOINT,MULTICAST,NOARP,UP,LOWER_UP> mtu 1300 qdisc fq_codel state UNKNOWN group default qlen 5000
    link/none 
    inet 192.168.168.6/24 scope global VlanPersonal
       valid_lft forever preferred_lft forever
    inet6 fe80::3981:ab36:dd67:e0ad/64 scope link stable-privacy 
       valid_lft forever preferred_lft forever
```

### \# .更换配置文件/重新同步配置文件

#### 1.linux 快速更换配置文件

``` as
user@Lab ~/ # sudo vl-update -config  [授权码或路径]
```

#### 1.windows 更换配置文件

``` as
Microsoft Windows [版本 10.0.22621.1413]
(c) Microsoft Corporation。保留所有权利。

C:\Users\Cato> vl-update -config [授权码或路径]
````

### 进阶

#### 1.证书管理工具

我们需要给每个节点颁发一个或多个可信身份进行入网，首先我们需要使用根CA进行证书颁发。
在完成程式 vlan-cert下载流程后，找到下载完成的程式文件，我们可以先看看支持哪些功能。

``` as
vlan-cert -h
```

例如：

``` as
user@Lab ~/vlan # vlan-cert -h
Usage of vlan-cert <global flags> <mode>:
  Global flags:
    -version: Print the version
    -h, -help: Print this help message

  Modes:
    api <flags>: signed certificate by web service
    sign <flags>: create and sign a certificate
    parse <flags>: parse details about a certificate
```

● api 通过Http Rest Api 接口颁发证书（基础配置文件/即配置文件的pki部分）

  ○ -ca-crt 指定根CA证书路径

    ■ 成品仓的CA目录内提供了一个学习测试的长期CA许可

  ○ -ca-key指定根CA密钥路径

    ■ 成品仓的CA目录内提供了一个学习测试的长期CA许可

  ○ -listen 接口服务监听端口

    ■ 注意：默认监听地址为 127.0.0.1:3650

● sign 签发证书

  ○ -ca-crt 指定根CA证书路径

    ■ 默认情况下Linux和MacOS的路径是 /etc/vlan/ca.crt

    ■ 默认情况下Windows系统的路径是当前运行目录下的 ca.crt

    ■ 成品仓的CA目录内提供了一个学习测试的长期CA许可

  ○ -ca-key指定根CA密钥路径

    ■ 默认情况下Linux和MacOS的路径是 /etc/vlan/ca.key

    ■ 默认情况下Windows系统的路径是当前运行目录下的 ca.key

    ■ 成品仓的CA目录内提供了一个学习测试的长期CA许可

  ○ -ip 指定用户CA所拥有的IP地址及掩码

    ■ 例如： 192.168.0.1/24

  ○ -out-config 保存用户基础配置的路径

    ■ （基础配置文件/即配置文件的pki部分）

    ■ 默认为当前目录

  ○ -out-crt保存用户CA证书的路径

    ■ 默认为当前目录

  ○ -out-key保存用户CA密钥的路径

    ■ 默认为当前目录

● parse 解析证书并输出证书信息

  ○ -path 指定CA证书路径

#### 1.1.签发证书

``` as
vlan-cert sign -ip 10.10.10.10/28
```

例如：

``` as
user@Lab ~/vlan (master)# vlan-cert sign -ip 10.10.10.10/28
```

 若根CA文件未放置在默认路径，请通过 -ca-crt 和 -ca-key 指定CA密钥对文件位置。
 用户CA密钥对颁发后，若未通过参数 -out-crt和 -out-key指定，将默认保存到当前路径下。
1.2.解析证书

``` as
vlan-cert parse ./my.crt
```

例如：

``` as
user@Lab ~/vlan (master)# vlan-cert parse ./my.crt

VlanCertificate {
        Details {
                Names: [
                        "center.xe"
                        "*.center.xe"
                ]
                Network: [
                        10.10.10.10/28
                ]
                Subnets: []
                Groups: []
                Not Before: 2023-03-19 20:21:36 +0800 CST
                Not After: 2123-02-21 12:42:55 +0800 CST
                Is CA: false
                Issuer: a4ebc9148c7c1c68000d0054ebed0aa2ae840d8d5f4be8840e8209dc75c41930
                Public key: 1981a87f51bf7d59336c75c3ae37fe6367abaa7b21f095de71fd558ab05a1b3c
        }
        Fingerprint: c92145d05264144615c8edb6b5e1693889556c3c2363d3fed81974be5b914d28
        Signature: 7d07964e52d3378c02b2f4c3c80e46789988aaaabb2b69f7aed629e22b912671f8dc9fe1b42031a53652f604033dee4f6c9c19d94cb873f30ea386351dc1f703
}
```

若需体验剩余的99%的功能，则需要对配置文件进行进一步的调整。以下提供一些常用的配置项：

#### 2.配置同步更新

``` yml
# sync 同步远端配置及版本镜像
sync:
  # source 指定认证中心服务接口地址或官方节点UUID
  source: "49f3ueTZEDc"

  # addition 远端附加配置同步项内容
  # 注意：同步更新请求该地址中的配置内容将会循环覆盖跟新本地配置中的内容
  addition: "https://example.org/setting.yml"
```

#### 3.配置静态节点

``` yml
# 这里需要配置一些公网暴露节点用于路由公告及路由发现，则必须在这里配置最基础的静态路由节点。
# 格式:
#   "内网地址": ["公网地址或域名:端口"]
points:
  # 例如: 这里我们将网内的 6.6.6.6 设为一个静态节点，
  #       它的公网地址为 120.120.119.119 并开放了UDP 65533 端口。
  #       则我们在此添加一行配置为：
  "6.6.6.6": "120.120.119.119:35533",
  # 当然，支持域名A记录解析地址，例如 将网内 6.6.7.7 通过它的 DDNS 域名配置：
  "6.6.7.7": "myhome.yourdomain.com:35533",
  # 如果某个节点拥有多个公网地址，我们仅需这样配置即可：
  "6.6.8.8": ["113.215.215.214:35533", "113.215.215.215:35533"]
```

#### 4.配置路由节点

``` yml
# 公网暴露节点可以在这里配置服务信息，用于路由公告及路由发现。
tower:
  # 如果我们自身需要为其它节点提供路由公告及路由发现服务，请配置service参数的值为true
  service: true
```

#### 5.配置网络代理

``` yml
proxy:
  # socks5: 在此节点上启用socks5代理服务。
  # 其他设备可以通过socks5访问该节点网络可访问的地址。
  socks5:
      # 在该节点的1080端口监听一个Socks5代理服务
    - addr: 0.0.0.0:1080
      # user 和 password 为空则免认证
      user: "username"
      password: "password"

  # forward: 重定向转发可访问的目标地址端口监听到本地端口。
  forward:
    - proto: "tcp"
      local: "0.0.0.0:3388"
      remote: "192.168.1.105:3389"
    - proto: "udp"
      local: "6.6.9.9:65534"
      remote: "10.1.253.1:65533"
```

#### 6.配置SSH账户

``` yml
ssh:
  # 包含ssh服务器节点密钥的文件的路径
  # 为空时，默认生成rsa 4096私钥:
  point_key: /etc/vlan/ssh_point_rsa_key

  # 允许连接的授权公钥列表
  users:
    - name: user1
      # 支持单用户多密钥/当然也支持单密钥
      keys:
        - "ssh-rsa xxxxx"
        - "ssh-ed25519 xxxx"

    - name: user2
      keys: "ssh-rsa xxxxx"
```

#### 7.配置Web服务

``` yml
web:
  # 使用SSL
  - crt: "/root/vlan/http/ssl/cert.crt"
    key: "/root/vlan/http/ssl/cert.key"
    path: "/root/web/example"
    port: 8080
  
  # 不使用SSL
  - crt: ""
    key: ""
    path: "/root/vlan/lib/service/web/example"
    port: 9090
```

Web服务的云函数部分具体使用及特性请惨遭example目录内的function.js

#### \#.配置本地日志

``` yml
# Configure logging level
logging:
  # 日志详细粒度等级，从略到详分别是 panic, fatal, error, warning, info, debug 和 trace.
  # 默认 info
  level: info

  # 日志格式支持 json 和 text 两种格式
  # 默认 text
  format: text

  # 日志语言
  # 内置支持 en-US（英文)、zh-CHS (简体中文)、zh-CHT (繁体中文)、
  # ja-JP (日文)、ru-RU (俄文)、de-DE (德文)、fr-FR (法文)、
  # ko-KR (韩文)、es-ES (西班牙文)
  # Linux和MacOS的外置翻译文件路径是 /etc/vlan/i18n.json
  # Windows外置翻译文件的路径是 c:\windows\system32\i18n.json
  # 默认 en-US
  lang: en-US

  # 日志存储位置.
  # 默认位置 "/var/log/vlan/vlan.log"(linux/macos)
  # 或 "./logs/vlan.log"(windows)
  file_path: "/var/log/vlan/vlan"

  # 每个日志文件最大大小
  # 默认 20 (MB)
  max_size: 20
  # 日志分割文件最大数量，如果超过该数量将复写最早生成的。
  # 默认 100 个
  max_backups: 100
  # 日志保存周期，超过该周期会删除最早存储的。
  # 默认 30 (Days)
  max_age: 30
```

#### \*.日志翻译文件模板及使用方式

翻译文件内的 zh-CN与参数 -lang的值对应即可，翻译文件内可包含多个语种。

注意：翻译内容使用正则表达式进行替换，提供错误的格式可能会导致程序崩溃。

``` json
{
  "zh-CN": {
    "Service uninstalling": "正在卸载服务",
    "Loading config": "正在加载配置",
    "Setting language": "正在设置语言",
    "Service installing": "正在安装服务",
    "Service initialization completed": "服务初始化完成",
    "Failed to find wintun, try to download and install it": "找不到虚拟网卡驱动,正在尝试下载并安装",
    "Download wintun failed": "下载虚拟网卡驱动失败",
    "Download wintun success": "下载虚拟网卡驱动成功",
    "Install wintun": "安装虚拟网卡驱动",
    "Install wintun failed": "安装虚拟网卡驱动失败",
    "Install wintun success": "安装虚拟网卡驱动成功",
    "Current version is updated": "当前已是最新版本",
    "Inconsistent version comparison": "版本对比不一致",
    "Install current program version": "安装当前运行版本",
    "Download success": "下载完成",
    "Download failed": "下载失败",
    "Check config skipped, uuid or auth url is empty": "检查配置跳过,认证编码或配置文件地址为空",
    "Failed .* start": "启动服务失败",
    "listen udp ": "监听地址 ",
    "bind: ": "绑定: ",
    "address already in use": "地址已被其它程序占用",
    "Config enable status .* false": "配置文件已禁用",
    "remote profile request failed": "远端配置请求失败",
    "Failed .* load config file": "加载配置文件失败",
    "Console command .* stop service": "停止服务命令",
    "Console command .* reloading config": "重新加载配置命令",
    "Console command set logging level .* info": "设置日志级别为信息",
    "Console command set logging level .* debug": "设置日志级别为调试",
    "Console command set logging level .* trace": "设置日志级别为跟踪",
    "Console command set logging level .* fatal": "设置日志级别为致命",
    "Console command set logging level .* error": "设置日志级别为错误",
    "Console command set logging level .* warn": "设置日志级别为警告",
    "Console command set logging level .* off": "设置日志级别为关闭",
    "no such file or directory": "文件或目录不存在",
    "The system cannot find the file specified": "系统无法找到指定的文件",
    " a vlan test packet .* endpoint:": "测试数据包到:",
    " ACK": " 确认",
    " ack=": " 确认号=",
    " close tunnel message": "关闭隧道通知",
    " CWR": " 拥塞窗口减小",
    " cwr=": " 拥塞窗口减小号=",
    " ECE": " 显式拥塞提醒",
    " ece=": " 显式拥塞提醒号=",
    " endPort:": " 结束端口:",
    " FIN": " 终止",
    " fin=": " 终止号=",
    " groups:": " 安全组:",
    " ip:": " 网络地址:",
    " localIp:": " 本地地址:",
    "name:": "名称:",
    "no such host": "无此主机",
    " NS": " ECN-nonce标志",
    " ns=": " ECN-nonce标志号=",
    " on ": " 在 ",
    " point:": " 节点地址:",
    " proto:": " 协议:",
    " PSH": " 推送",
    " psh=": " 推送号=",
    " RST": " 重置",
    " rst=": " 重置号=",
    " seq=": " 序列号=",
    " sha:": " 证书特征:",
    " size=": " 大小=",
    " startPort:": " 起始端口:",
    " SYN": " 同步",
    " syn=": " 同步号=",
    " thread:": " 线程:",
    " to ": " 到 ",
    " tun DNS or system dns settings": " 网络适配器或系统网络配置项",
    " URG": " 紧急",
    " urg=": " 紧急号=",
    "\"active\"": "\"主动\"",
    "\"alive\"": "\"存活\"",
    "\"allow\"": "\"允许访问\"",
    "\"always\"": "\"总是\"",
    "\"any\"": "\"任意\"",
    "\"Broker\"": "\"跃点访问\"",
    "\"broker\"": "\"跃点\"",
    "\"brokerFrom\"": "\"来源\"",
    "\"brokerTo\"": "\"目标\"",
    "\"build\"": "\"构建版本\"",
    "\"cmd\"": "\"指令\"",
    "\"Config\"": "\"配置文件\"",
    "\"DEBUG\"": "\"调试\"",
    "\"deny\"": "\"禁止访问\"",
    "\"direction\"": "\"方向\"",
    "\"DNS\"": "\"域名解析\"",
    "\"duration\"": "\"持续时间\"",
    "\"endpoint\"": "\"末端节点\"",
    "\"endPort\"": "\"结束端口\"",
    "\"ERROR\"": "\"错误\"",
    "\"error\"": "\"错误\"",
    "\"fingerprint\"": "\"证书指纹\"",
    "\"Firewall\"": "\"安全策略\"",
    "\"from\"": "\"来源\"",
    "\"groups\"": "\"安全组\"",
    "\"Handshake\"": "\"连接建立\"",
    "\"handshake\"": "\"连接建立过程\"",
    "\"hostname\"": "\"主机名\"",
    "\"id\"": "\"日志编号\"",
    "\"incoming\"": "\"入站\"",
    "\"index\"": "\"索引\"",
    "\"initiatorIndex\"": "\"发起者索引\"",
    "\"interface\"": "\"网络适配器\"",
    "\"interfaceName\"": "\"网络适配器\"",
    "\"ip\"": "\"网络地址\"",
    "\"IP\"": "\"网络地址\"",
    "\"issuer\"": "\"证书颁发者\"",
    "\"length\"": "\"大小\"",
    "\"level\"": "\"日志级别\"",
    "\"listen\"": "\"监听地址\"",
    "\"local\"": "\"本地\"",
    "\"localIndex\"": "\"本地索引\"",
    "\"localIp\"": "\"本地IP\"",
    "\"main\"": "\"主线程\"",
    "\"Mask\"": "\"子网掩码\"",
    "\"message\"": "\"日志内容\"",
    "\"method\"": "\"方法\"",
    "\"module\"": "\"模块\"",
    "\"name\"": "\"名称\"",
    "\"names\"": "\"节点名称\"",
    "\"network\"": "\"网络\"",
    "\"never\"": "\"从不\"",
    "\"newSet\"": "\"新集合\"",
    "\"No ssh users .* authorize": "\"未添加远程管理用户密钥信息\"",
    "\"once\"": "\"一次\"",
    "\"origSet\"": "\"旧集合\"",
    "\"outgoing\"": "\"出站\"",
    "\"packet\"": "\"数据包简要\"",
    "\"passive\"": "\"被动\"",
    "\"pending\"": "\"建立中\"",
    "\"PID\"": "\"数据包编号\"",
    "\"point\"": "\"节点地址\"",
    "\"port\"": "\"端口\"",
    "\"Port\"": "\"端口\"",
    "\"preferredRanges\"": "\"探索范围\"",
    "\"Process\"": "\"处理进程\"",
    "\"processes\"": "\"处理进程\"",
    "\"proto\"": "\"协议\"",
    "\"Punchy\"": "\"网络穿透\"",
    "\"punchy\"": "\"网络穿透\"",
    "\"remote\"": "\"远端\"",
    "\"remoteIndex\"": "\"远端索引\"",
    "\"remoteIp\"": "\"远端地址\"",
    "\"responderIndex\"": "\"响应者索引\"",
    "\"sendRecvError\"": "\"发送接收错误\"",
    "\"sentCachedPackets\"": "\"发送缓存数据包\"",
    "\"Session\"": "\"数据传输\"",
    "\"session\"": "\"会话\"",
    "\"sha\"": "\"证书特征\"",
    "\"SSH\"": "\"远程管理\"",
    "\"stage\"": "\"阶段\"",
    "\"startPort\"": "\"起始端口\"",
    "\"state\"": "\"状态\"",
    "\"stored\"": "\"缓存\"",
    "\"style\"": "\"方式\"",
    "\"Sync\"": "\"配置同步\"",
    "\"thread\"": "\"线程\"",
    "\"time\"": "\"日志时间\"",
    "\"Tower\"": "\"通讯塔台\"",
    "\"TRACE\"": "\"跟踪\"",
    "\"tunnelCheck\"": "\"隧道检查\"",
    "\"type\"": "\"类型\"",
    "\"Type\"": "\"类型\"",
    "\"unknown\"": "\"未知\"",
    "\"user\"": "\"用户\"",
    "\"valid\"": "\"有效期至\"",
    "\"version\"": "\"版本更新\"",
    "\"via\"": "\"跃点\"",
    "\"Zone\"": "\"区域\"",
    "\"signal\"": "\"信号\"",
    "\"interrupt\"": "\"中断\"",
    ":active": ":主动",
    ":alive": ":存活",
    ":always": ":总是",
    ":any": ":任意",
    ":config": "配置读取",
    ":false": ":否",
    ":interrupt": ":中断",
    ":main": "主线程",
    ":never": ":从不",
    ":null": ":空",
    ":once": ":一次",
    ":passive": ":被动",
    ":pending": ":建立中",
    ":session": ":会话",
    ":true": ":是",
    "path:": "路径:",
    "\"path\"": "\"路径\"",
    ":unknown": ":未知",
    ":version": ":版本更新",
    "\\&{0,1}map\\[": "[",
    "\\[Broker\\]": "[跃点访问]",
    "\\[Config\\]": "[配置文件]",
    "\\[DEBUG\\]": "[调试]",
    "\\[DNS\\]": "[域名解析]",
    "\\[ERROR\\]": "[错误]",
    "Invalid certificate from point": "无效的节点证书",
    "\\[Firewall\\]": "[安全策略]",
    "\\[Handshake\\]": "[连接建立]",
    "\\[Process\\]": "[处理进程]",
    "\\[Punchy\\]": "[网络穿透]",
    "\\[Session\\]": "[数据传输]",
    "\\[SSH\\]": "[远程管理]",
    "\\[Sync\\]": "[配置同步]",
    "\\[Tower\\]": "[通讯塔台]",
    "\\[TRACE\\]": "[跟踪]",
    "accept ssh session channel": "接受会话",
    "Add ": "添加 ",
    "allow:": "允许访问:",
    "Attempt .* broker through points": "尝试通过跃点访问",
    "Authorized ssh key": "访问密钥已获得授权",
    "boringcrypto:": "加密模块:",
    "broker:": "跃点:",
    "brokerFrom:": "来源:",
    "brokers:": "跃点列表:",
    "brokerTo:": "目标:",
    "build:": "构建版本:",
    "Caught signal, shutting down": "捕获信号，正在关闭",
    "cert:": "证书信息:",
    "channelType": "通道类型",
    "Client certificate": "已解析到末端证书",
    "Config is corrupt, skip save": "无法保存错误的配置文件",
    "Delete tunnel service queue": "删除隧道服务队列",
    "direction:": "方向:",
    "DNS resolution failed for point address": "无法解析节点地址",
    "DNS results changed for host list": "域名解析结果已更改",
    "duration:": "持续时间:",
    "endpoint:": "末端节点:",
    "Error while validating outbound .* ipv4, type:": "验证出站数据包时出错: 数据包不是IPv4, 类型:",
    "error:": "错误:",
    "Establish tunnel .* broker target": "建立到代理目标的隧道",
    "executed inner command via ssh": "执行内部命令",
    "existing:": "连接已建立:",
    "Failed .* load certificate from config": "无法从配置加载证书",
    "Failed .* load config": "配置文件加载失败",
    "Failed .* send handshake message": "无法发送连接建立消息",
    "fingerprint:": "证书指纹:",
    "fingerprints:": "证书指纹:",
    "rulesVersion": "安全策略规则版本",
    "New firewall has been installed": "安全策略组已配置",
    "Firewall rule added": "安全策略规则已添加",
    "Firewall rule removed": "安全策略规则已移除",
    "Firewall rule updated": "安全策略规则已更新",
    "has invalid type": "配置了无效的类型",
    "contains both true and false rules": "包含了两种类型的规则",
    "but no default set for": "但没有包含默认范围",
    "is invalid": "无效",
    "has invalid key": "配置了无效的键",
    "Loaded ": "已加载 ",
    "//(type": "//(类型",
    " has changed": " 已更改",
    "Error while closing udp socket": "关闭通讯套接字时出错",
    "has invalid value": "配置了无效的值",
    "has invalid CIDR": "配置了无效的地址范围",
    " config": " 配置",
    "config ": "配置项",
    "oldFirewallHash": "旧的安全策略哈希",
    "Firewall started": "安全策略组已启动",
    "Firewall stopped": "安全策略组已停止",
    "firewallHash:": "安全策略哈希:",
    "function": "模块",
    "Generated index": "生成索引",
    "Get cert state failed": "获取证书状态失败",
    "Get update success": "获取更新配置成功",
    "Goodbye": "进程结束",
    "Failed .* add broker": "跃点添加失败",
    "handleCreateBrokerRequest": "处理创建跃点请求",
    "handleCreateBrokerResponse": "处理创建跃点响应",
    "Failed .* activate tun device": "无法激活专网适配器",
    "Error while reading outbound packet": "读取出站数据包时出错",
    "No firewall config change detected": "没有安全策略配置被改变",
    "Error while creating firewall during reload": "在重新加载时创建安全策略时出错",
    "Firewall rulesVersion has overflowed, resetting conntrack": "安全策略规则版本溢出,重置连接跟踪",
    " changed to": " 已更改为",
    "Handshake failed": "连接建立失败",
    "Broker State not found": "找不到跃点服务",
    "Existing broker mismatch with CreateBrokerRequest": "当前跃点与请求创建时所指定的跃点不匹配",
    "Handshake message received": "连接建立消息已接收",
    "Handshake message sent": "连接建立消息已发送",
    "Handshake timed out": "连接建立超时",
    "handshake:": "连接建立过程:",
    "Network adapter is active": "专网适配器已启用",
    "hostname:": "主机名:",
    "i/o timeout": "响应超时",
    "incoming ": "入站 ",
    "index:": "索引:",
    "INFO": "信息",
    "routines": "协程",
    "Failed .* create multi queue reader": "创建多队列读取器失败",
    "Failed .* get udp listen address": "获取监听地址失败",
    "initiatorBrokerIndex:": "发起方跳跃索引:",
    "initiatorIndex:": "发起方索引:",
    "interface:": "专网适配器名称:",
    "interfaceName:": "网络适配器名称:",
    "issuer:": "颁发者:",
    "ix_psk0": "无预共享密钥",
    "key:": "密钥:",
    "length:": "大小:",
    "listen:": "监听地址:",
    "Loaded send_recv_error config": "已加载发送接收错误配置",
    "localAllowList.All//w+": "本地访问授权",
    "localIndex:": "本地索引:",
    "localIp:": "本地地址:",
    "lookup ": "查找 ",
    "method:": "方法:",
    "names:": "节点名称:",
    "network is unreachable": "网络不可达",
    "network:": "网络:",
    "newSet:": "新集合:",
    "No ssh users .* authorize": "未添加远程管理用户密钥信息",
    "origSet:&": "原集合:",
    "Checking config": "检测配置更新",
    "Sync config failed": "配置同步失败",
    "Sync addition config success": "附加配置项同步成功",
    "Ignoring brokers from config because service is true": "跃点服务已启用,忽略配置文件中的跃点",
    "Unsupported config source": "不支持的配置源",
    "Get config success": "获取配置成功",
    "auth failed": "认证失败",
    "auth success": "认证成功",
    "auth:": "认证:",
    "Sync config success": "配置同步成功",
    "Check addition config skipped, addition is empty": "检测附加配置项跳过,附加配置项为空",
    "Sync addition config failed": "附加配置项同步失败",
    "remote addition config is empty": "远程附加配置项为空",
    "Failed .* update broker for brokerTo": "无法更新目标跃点",
    "Can't find a point for peer": "无法找到目标跃点",
    "brokerManager Failed .* marshal Control CreateBrokerResponse message .* create broker": "跃点管理器无法解析创建跃点响应消息",
    "outgoing ": "出站 ",
    "Packet from": "数据包自",
    "Packet store": "数据包已缓存",
    "peerBroker does not have Broker state for brokerTo": "目标跃点没有配置跃点服务",
    "packet:": "数据包:",
    "Payload:": "数据简要:",
    "PID:": "数据包编号:",
    "Point relationship data structure created": "已创建点关系数据结构",
    "Point sadness": "节点状态",
    "preferredRanges:": "探索范围:",
    "Processes endpoint added": "已添加末端节点心跳检测进程",
    "Processes remote index deleted": "已删除远程索引",
    "processes:": "网络进程:",
    "Punching .* for": "正在尝试穿透访问:",
    "Punchy is enabled": "网络穿透功能已启用",
    "Query for": "查询域名记录",
    "Re-send CreateBroker request": "重新发送创建跃点请求",
    "Read broker from .*$": "从配置文件读取代理",
    "Recv error received": "接收到接收错误",
    "Unable .* parse points entry": "无法解析节点",
    "tower.service enabled on node but upstream towers exist in config": "已启用通讯塔台服务,但配置文件中存在上游通讯塔台",
    "Unable .* parse tower point entry": "无法解析通讯塔台节点",
    "points key is not in our subnet, invalid": "节点不在本地地址范围内",
    "tower point is not in our subnet, invalid": "通讯塔台节点不在本地地址范围内",
    "Failed .* marshal tower query payload": "无法解析通讯塔台查询消息",
    "deleting": "删除",
    "from tower": "从通讯塔台",
    "point remote address could not be parsed": "节点地址无法解析",
    "Error while marshaling for tower update": "无法解析通讯塔台更新消息",
    "Failed .* unmarshal tower packet": "无法解析通讯塔台数据包",
    "Invalid tower update": "无效的通讯塔台更新消息",
    "I don't answer queries, but received from": "我不响应查询,但接收到了来自的查询请求",
    "Failed .* marshal tower point query reply": "无法解析通讯塔台节点查询响应消息",
    "Failed .* marshal tower point was queried for": "无法解析通讯塔台节点查询消息",
    "I am not a tower, do not take point updates": "我不是通讯塔台,不接受通讯塔台节点更新消息",
    "Point sent invalid update": "节点发送了无效的更新消息",
    "answer": "响应方",
    "Failed .* marshal tower host update ack": "无法解析通讯塔台主机更新响应消息",
    "Punching on": "正在尝试穿透访问",
    "No tower.points configured, this point will only be able .* initiate tunnels with points entries": "未配置通讯塔台节点,该节点只能与配置文件中的通讯塔台节点建立连接",
    "does not have a points entry": "没有配置通讯塔台节点",
    "tower //(": "通讯塔台 (",
    "point.network must be one of ip, ip4, or ip6": "通讯塔台节点的网络地址必须是ip, ip4或ip6",
    "remoteAllowList.Allow": "远程访问授权",
    "remoteIndex:": "远程索引:",
    "remoteIp:": "远程地址:",
    "responderBrokerIndex:": "响应方跳跃索引:",
    "responderIndex:": "响应方索引:",
    "route is unreachable": "路由不可达",
    "Send CreateBrokerRequest": "发送创建跃点请求",
    "send CreateBrokerResponse": "发送创建跃点响应",
    "Send error received": "接收到发送错误",
    "Send handshake via broker": "通过跃点发送连接建立消息",
    "Sending": " 正在发送",
    "sendRecvError:": "发送接收错误:",
    "sendto:": "数据发送:",
    "sentCachedPackets:": "已缓存数据包:",
    "signal:": "信号:",
    "SSH server is listening": "远程管理模块已启动",
    "stage:": "阶段:",
    "Starting DNS service": "启动域名解析服务",
    "state:": "状态:",
    "stored packets": "个已缓存的数据包",
    "stored:": "缓存:",
    "style:": "方式:",
    "Sync is enabled": "远程同步已启用",
    "Taking new handshake": "正在处理新的连接建立消息",
    "Trusted CA fingerprints": "受信任的证书指纹",
    "Tunnel status": "隧道状态",
    "tunnelCheck:": "隧道检查:",
    "Type:": "类型:",
    "User logged in ssh": "用户已登录",
    "user:": "用户:",
    "valid:": "有效期至:",
    "Validity of client certificate": "末端证书有效性校验完成",
    "via:": "跃点:",
    "WARNING": "警告",
    "values must all be the same true/false value": "值必须都是一个 true或false",
    "invalid state, allowlist returned": "无效的状态,允许列表返回",
    "rejected a packet //(top//)": "拒绝了一个数据包//(数据头//)",
    "receiveWindow": "接收窗口",
    "accepted": "接受",
    "currentCounter": "当前计数器",
    "incomingCounter": "入站计数器",
    "reason": "原因",
    "window shifting": "窗口移动",
    "Receive window": "接收窗口",
    "duplicate": "重复",
    "old duplicate": "旧的重复",
    "nonsense": "噪音",
    "Failed .* reload": "无法重新加载",
    "failed .* generate unique localIndex": "无法生成唯一的本地索引",
    "brokerManager failed .* update broker": "跃点管理器无法更新跃点",
    "unknown broker": "未知的跃点",
    "brokerManager Failed .* marshal Control message .* create broker": "跃点管理器无法解析创建跃点消息",
    "brokerManager Failed .* allocate a local index for broker": "跃点管理器无法为跃点分配本地索引",
    "invalid mask": "无效的子网掩码",
    "invalid ip": "无效的网络地址",
    "invalid port": "无效的端口",
    "CalculatedRemote": "计算远端地址",
    "mask=": "子网掩码=",
    "port=": "端口=",
    "entry has invalid type": "配置了无效的类型",
    "detection_point entry": "计算远端地址",
    "missing mask": "缺少子网掩码",
    "missing port": "缺少端口",
    "local certificate is not current": "本地证书不是预期的证书",
    "Re-handshaking with remote": "正在重新建立连接",
    "invalid curve": "无效的加密曲线",
    "Close interface failed": "关闭专网适配器失败",
    "invalid ": "无效的",
    "defaulting .* ": "默认为",
    "unknown protocol": "不支持的协议",
    "firewallRule": "安全策略规则",
    "Failed .* generate index": "无法生成索引",
    "Failed .* marshal handshake message": "无法解析连接建立消息",
    "Failed .* call": "无法调用",
    "Refusing .* handshake with myself": "拒绝与自己建立连接",
    "denied incoming handshake": "拒绝入站连接",
    "Dropping handshake, churning": "丢弃连接建立消息,正在重新建立连接",
    "Signal did not arrive at a key": "未收到共享密钥对应的通告",
    "Handshake send failed: both addr and via are nil": "连接建立消息发送失败: 地址和跃点都为空",
    "Handshake too old": "连接建立消息已过期",
    "Failed .* add point due .* localIndex ": "无法添加节点,本地索引冲突",
    "collision": "冲突",
    "Failed .* add point .* routing table": "无法添加节点到节点映射表",
    "Handshake is already complete": "连接建立已完成",
    "header": "消息头",
    "Failed unmarshal handshake message": "无法反解析连接建立消息",
    "Incorrect point responded .* handshake": "错误的节点响应了连接建立消息",
    "responderEndpoint": "响应的末端节点",
    "intendedEndpoint": "预期末端节点",
    "blockedUdpAddrs": "已阻止的地址",
    "Blocked addresses for handshakes": "已禁止与该地址建立连接",
    "Failed .* create LRU": "无法创建LRU",
    "Broker unexpected state": "跃点服务状态异常",
    "New point shadows existing point remoteIndex": "新的节点与已有节点的远程索引冲突",
    "Failed .* generate random index": "无法生成随机索引",
    "Failed .* forward .* tun": "无法转发数据包到专网适配器",
    "Error while validating outbound packet": "验证出站数据包时出错",
    "dropping outbound packet": "丢弃出站数据包",
    "endpoint not in our CIDR or in unsafe routes": "末端节点不在本地地址范围内或不在安全路由内",
    "Failed .* write .* tun": "无法将数据包写入专网适配器",
    "error while parsing outgoing packet for firewall check": "解析出站数据包时出错",
    "dropping cached packet": "丢弃缓存数据包",
    "packetInfo": "数据包信息",
    "dropping SendMessageToEndpoint, endpoint not in our CIDR or in unsafe routes": "丢弃发送数据包到末端节点,末端节点不在本地地址范围内或不在安全路由内",
    "outCap": "出站容量",
    "payloadLen": "数据长度",
    "headerLen": "消息头长度",
    "cipherOverhead": "加密开销",
    "SendVia out buffer not large enough for broker": "发送缓冲区不足",
    "Failed .* EncryptDanger in sendVia": "无法加密数据包",
    "Failed .* WriteTo in sendVia": "无法写入数据包 - 跃点传输",
    "Tower update triggered for punch due .* rebind counter": "通讯塔台更新,穿透访问重绑定计数器已触发",
    "attemptedCounter": "尝试次数计数",
    "Failed .* encrypt outgoing packet": "无法加密出站数据包",
    "Failed .* write outgoing packet": "无法写入出站数据包",
    "failed .* find point": "无法找到节点",
    "value:": "值:",
    "private": "私有",
    "no outside connection": "无法连接到外部网络",
    "no inside interface": "无法连接到专网适配器",
    "no certificate state": "无法获取证书状态",
    "no firewall rules": "无法获取安全策略规则",
    "Failed .* initialize forward handler": "无法初始化转发处理器",
    "Failed .* initialize socks5 handler": "无法初始化代理处理器",
    "Failed .* initialize tower handler": "无法初始化塔台处理器",
    "unknown cipher": "不支持的加密算法",
    "Failed .* get a tun/tap device": "无法获取专网适配器",
    "Failed .* initialize interface": "无法初始化专网适配器",
    "Failed .* start stats emitter": "无法启动统计信息收集器",
    "no cipher state available .* encrypt": "无法加密数据包",
    "Recv error for unknown index": "接收到未知索引的接收错误",
    "Someone spoofing recv_errors? ": "有人在伪造接收错误?",
    "no peer static key was present": "无法获取共享密钥",
    "provided payload was empty": "无法获取数据包",
    "error unmarshaling cert": "无法解析证书",
    "certificate did not contain any details": "证书不包含任何信息",
    "error while recombining certificate": "重新组合证书时出错",
    "certificate validation failed": "证书校验失败",
    "certificate validation failed but did not return an error": "证书校验失败但未返回错误",
    "cannot read password from nonexistent terminal": "无法从不存在的终端读取密码",
    "IP in new cert was different from old": "新证书的网络地址与旧证书不同",
    "new_ip": "新网络地址",
    "old_ip": "旧网络地址",
    "certificate for this host is expired": "本地证书已过期",
    "no network encoded in certificate": "证书不包含网络地址",
    "private key is not a pair with public key in cert": "证书的公钥与私钥不匹配",
    "no pki.ca path or PEM data provided": "未提供证书文件路径及信息",
    "unable .* read pki.ca file": "无法读取证书文件",
    "expired certificate present in CA pool": "证书池中存在过期的证书",
    "no valid CA certificates present": "证书池中没有有效的证书",
    "error while adding CA certificate .* CA trust store": "无法将证书添加到证书池",
    "Blocklisting cert": "证书已被列入黑名单",
    "error while unmarshaling pki.key": "无法解析私钥",
    "unable .* read pki.key file": "无法读取私钥文件",
    "no pki.key path or PEM data provided": "未提供私钥文件路径及信息",
    "error marshalling certificate no key": "无法解析证书",
    "invalid certificate on interface": "专网适配器的证书无效",
    "Failed .* load ca from config": "无法从配置加载证书",
    "Client cert refreshed from disk": "已从磁盘重新加载末端证书",
    "Could not load client cert": "无法加载末端证书",
    "Failed .* reload PKI from config": "无法从配置加载证书",
    "endpoint not found": "未找到末端节点",
    "Processes remoteIndex added": "已添加远程索引",
    "unable .* find index": "无法找到索引",
    "unable .* find reverse index or connectionstate nil in ": "无法找到反向索引或连接状态为空，在 ",
    "routing table": " 节点映射表",
    "route is unreachable with broker": "无法通过跃点路由到末端节点",
    "Punchy is disabled": "网络穿透功能已禁用",
    "Changing punchy.punch with reload is not supported, ignoring.": "不支持在重新加载时更改网络穿透功能,已忽略",
    "The provided virtual ip could not be parsed": "无法解析虚拟地址",
    "Could not find tunnel for virtual ip": "无法找到虚拟地址对应的隧道",
    "sshPrintBrokers failed .* convert args type": "无法转换参数类型",
    "processes LocalIndex": "本地索引",
    "does not match BrokerState LocalIndex": "与跃点服务的本地索引不匹配",
    "Dns service is not enabled": "域名解析服务未启用",
    "Invalid number of arguments": "无效的参数数量",
    "Reloading config": "正在重新加载配置",
    "Saving config": "正在保存配置",
    "Failed .* reconfigure the ssh": "无法重新配置远程管理",
    "sshlisten must be provided": "必须提供远程管理监听地址",
    "invalid sshlisten address": "无效的远程管理监听地址",
    "unable .* read sshpoint_key file": "无法读取远程管理私钥文件",
    "error while adding sshpoint_key": "无法添加远程管理私钥",
    "Authorized user had an error, ignoring": "已忽略授权用户的错误",
    "Authorized user is missing the user field": "授权用户缺少用户字段",
    "Failed .* authorize key": "无法授权密钥",
    "Did not understand ssh key": "无法识别远程管理密钥",
    "Authorized user is missing the keys field or was not understood": "授权用户缺少密钥字段或无法识别",
    "was not understood": "无法识别",
    "can not be empty": "不能为空",
    "error while setting up graphite sink": "设置统计信息收集器时出错",
    "Starting graphite. Interval": "启动统计信息收集器",
    "Interval:": "间隔:",
    "prefix:": "前缀:",
    "addr:": "地址:",
    "should not be empty": "不能为空",
    "Version information for the binary": "二进制文件的版本信息",
    "Prometheus stats listening on": "Prometheus统计信息监听在",
    " at ": " 的 ",
    "has changed": " 已更改",
    "Ignoring tower.advertise_addrs report because it is within the vlan network range": "忽略通讯塔台的地址汇报,因为它在专网地址范围内",
    "Service is stopping": "服务正在停止",
    "Service is starting": "服务正在启动",
    "Stoping process": "正在停止进程",
    "Starting process": "正在启动进程",
    "Remove old program success": "删除旧程序成功",
    "Instell success": "安装成功",
    "Update success": "更新成功",
    "Checking update": "正在检测更新",
    "main program": "主程序",
    "update program": "更新程序"
  }
  }
```
