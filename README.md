<p align="center">
  <img src="https://img.shields.io/badge/C%2B%2B-17-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white" alt="C++17 Badge">
  <img src="https://img.shields.io/badge/Unity-2022+-000000?style=for-the-badge&logo=unity&logoColor=white" alt="Unity Badge">
  <img src="https://img.shields.io/badge/License-Custom-orange?style=for-the-badge" alt="License Badge">
  <img src="https://img.shields.io/badge/Platform-Windows%20%7C%20Linux%20%7C%20iOS%20%7C%20Android-brightgreen?style=for-the-badge" alt="Platform Badge">
  <img src="https://img.shields.io/badge/Real--Time-WebSocket-blueviolet?style=for-the-badge" alt="WebSocket Badge">
</p>

<h1 align="center">🃏 Texas Hold'em Poker Club Platform</h1>

<p align="center">
  <b>商业级德州扑克俱乐部系统源码 | Commercial-Grade Texas Hold'em Poker Club Source Code</b><br>
  <b>德州撲克俱樂部系統 | Mã nguồn Poker Texas Hold'em | ポーカークラブシステム</b>
</p>
<p align="center">
  <a href="https://github.com/alibabamayun888/poker-club-platform/stargazers">
    <img src="https://img.shields.io/github/stars/alibabamayun888/poker-club-platform?style=social" alt="GitHub Stars">
  </a>
  <a href="https://github.com/alibabamayun888/poker-club-platform/network/members">
    <img src="https://img.shields.io/github/forks/alibabamayun888/poker-club-platform?style=social" alt="GitHub Forks">
  </a>
  <a href="https://github.com/alibabamayun888/poker-club-platform/issues">
    <img src="https://img.shields.io/github/issues/alibabamayun888/poker-club-platform?style=social" alt="GitHub Issues">
  </a>
</p>
---

## 📑 目录 | Table of Contents

- [项目简介](#-项目简介--project-introduction)
- [核心特性](#-核心特性--key-features)
  - [游戏玩法](#-游戏玩法--game-modes)
  - [俱乐部系统](#-俱乐部系统--club-system)
  - [技术架构](#-技术架构--tech-stack)
- [快速开始](#-快速开始--quick-start)
  - [环境要求](#-环境要求--requirements)
  - [Docker 一键部署](#-docker-一键部署--docker-deployment)
  - [源码编译](#-源码编译--build-from-source)
  - [项目结构](#-项目结构--project-structure)
- [性能基准](#-性能基准--performance-benchmark)
- [API 文档](#-api-文档--api-documentation)
- [常见问题 FAQ](#-常见问题-faq)
- [更新日志](#-更新日志--changelog)
- [贡献指南](#-贡献指南--contributing)
- [关键词索引](#-关键词索引--seo-keywords)
- [许可证](#-许可证--license)
- [联系我们](#-联系我们--contact)

---

## 📌 项目简介 | Project Introduction

**Texas Hold'em Poker Club Platform** 是一套完整的**商业级德州扑克俱乐部系统源码**，采用 **C++17 高性能服务端 + Unity 跨平台客户端** 架构，支持 **私人牌桌、朋友局、俱乐部联盟、MTT/SNG 锦标赛、代理分销系统** 等完整商业功能。

&gt; 🔍 **适合搜索关键词**：德州扑克源码、Poker Source Code、Texas Hold'em GitHub、Poker Platform、Online Poker Server、多人扑克游戏引擎、俱乐部系统源码、Poker Club System、德州APP源码、Poker Game Engine

| 语言 | 项目名称 |
|------|---------|
| 中文 | 德州扑克俱乐部系统源码 / 德州游戏源码 / 朋友局源码 |
| English | Texas Hold'em Poker Club Source Code / Poker Platform Source Code |
| Tiếng Việt | Mã nguồn Poker Texas Hold'em / Mã nguồn Club Poker |
| 日本語 | テキサスホールデムポーカークラブシステム |
| Português | Código Fonte do Clube de Pôquer Texas Hold'em |

---

## ✨ 核心特性 | Key Features

### 🎮 游戏玩法 | Game Modes

- ♠️ **经典德州扑克** (No-Limit Texas Hold'em) — 标准 52 张牌玩法
- 🃏 **短牌德州** (Short Deck / 6+ Hold'em) — 去除 2-5 的快节奏玩法
- 🏇 **奥马哈** (Omaha Poker) — 四张底牌变体
- 🍍 **大菠萝** (Pineapple / Crazy Pineapple) — 趣味三张底牌玩法
- 🏆 **MTT 多桌锦标赛** (Multi-Table Tournament) — 支持千人级同时参赛
- ⚡ **SNG 单桌锦标赛** (Sit & Go) — 满人即开，快速结算
- 🎯 **AOF 全押或弃牌** (All-in or Fold) — 极限刺激模式
- 🤠 **德州牛仔** (Texas Cowboy) — 特色 regional 玩法

### 🏢 俱乐部系统 | Club System

- ✅ **私人牌桌** (Private Table) — 密码保护，邀请制入局
- ✅ **朋友局** (Friends Game / 约局) — 熟人社交扑克
- ✅ **俱乐部联盟** (Club Alliance) — 多俱乐部联合运营
- ✅ **代理分销系统** (Agent & Affiliate System) — 三级分销，自动结算
- ✅ **邀请返利机制** (Invite & Rebate System) — 裂变增长
- ✅ **语音视频聊天** (Voice & Video Chat) — 实时互动
- ✅ **保险功能** (Insurance / All-in Insurance) — 降低 bad beat 风险
- ✅ **战绩统计** (Hand History & Statistics) — 完整数据复盘

### 🖥️ 技术架构 | Tech Stack

| 层级 | 技术栈 | 说明 |
|------|--------|------|
| **客户端** | Unity 2022.3 LTS | 支持 iOS / Android / H5 / WebGL / Windows / macOS |
| **服务端** | C++17 / Boost.Asio | 单节点支持 10,000+ 并发连接 |
| **网络协议** | WebSocket + Protobuf | 低延迟实时通信，平均延迟 &lt; 50ms |
| **数据库** | MySQL 8.0 + Redis 7.0 | 主从复制 + 集群缓存 |
| **消息队列** | RabbitMQ / Kafka | 异步任务处理，削峰填谷 |
| **部署** | Docker + Kubernetes | 容器化部署，一键扩缩容 |
| **监控** | Prometheus + Grafana | 实时性能监控与告警 |

---

## 🚀 快速开始 | Quick Start

### 📋 环境要求 | Requirements

- **OS**: Ubuntu 20.04+ / CentOS 8+ / Windows Server 2019+
- **Compiler**: GCC 9.4+ / Clang 12+ / MSVC 2019+
- **Build**: CMake 3.20+
- **DB**: MySQL 8.0+ / Redis 6.0+
- **Client**: Unity 2022.3 LTS (可选，仅客户端开发需要)

### 🐳 Docker 一键部署 | Docker Deployment





# 1. 克隆仓库
git clone https://github.com/alibabamayun888/poker-club-platform.git
cd poker-club-platform

# 2. 使用 Docker Compose 启动全部服务
docker-compose up -d

# 3. 检查服务状态
docker-compose ps

# 4. 查看服务端日志
docker-compose logs -f gameserver

💡 Docker 镜像包含：GameServer + MySQL + Redis + Nginx，开箱即用。

### 🔨 源码编译 | Build from Source
# 克隆仓库
git clone https://github.com/alibabamayun888/poker-club-platform.git
cd poker-club-platform

# 创建构建目录
mkdir build && cd build

# 生成 Makefile
cmake .. -DCMAKE_BUILD_TYPE=Release

# 编译（使用所有 CPU 核心）
make -j$(nproc)

# 运行单元测试
ctest --output-on-failure

# 启动服务端
./GameServer --config=../config/server.conf

###▶️ 运行 | Run
# 前台运行（调试模式）
./GameServer --config=../config/server.conf --log-level=debug

# 后台运行（生产模式）
nohup ./GameServer --config=../config/server.conf > /dev/null 2>&1 &




### 📁 项目结构 | Project Structure

plain

Texas-Holdem-Poker-Club-Platform/
├── Client/                 # Unity 客户端源码
├── Server/                 # C++ 游戏服务端
│   ├── Core/               # 核心游戏逻辑
│   ├── Network/            # 网络通信层
│   ├── DB/                 # 数据库操作
│   └── Modules/            # 功能模块
├── Proto/                  # 通信协议定义
├── Config/                 # 配置文件
├── Tools/                  # 辅助工具
└── Docs/                   # 部署文档

⚡ 性能基准 | Performance Benchmark

###📚 API 文档 | API Documentation

完整的 API 文档请查看：
📖 REST API 文档 — 用户注册、俱乐部管理、战绩查询
📡 WebSocket 协议文档 — 实时游戏通信协议
🎮 客户端集成指南 — Unity SDK 接入说明

###❓ 常见问题 FAQ

Q1: 这个项目可以用于商业用途吗？

A: 本项目源码仅供学习、研究和演示使用。如需商业授权，请联系下方邮箱获取商业许可协议。
Q2: 支持哪些平台部署？

A: 服务端支持 Linux (Ubuntu/CentOS) 和 Windows Server。客户端支持 iOS、Android、H5 (WebGL)、Windows、macOS。
Q3: 是否支持二次开发？

A: 完全支持。服务端采用模块化 C++ 架构，客户端基于 Unity，均有完整注释和文档。
Q4: 如何升级到最新版本？

A: 执行 git pull 获取最新代码，Docker 用户执行 docker-compose pull && docker-compose up -d。
Q5: 最大支持多少人在线？

A: 单节点部署支持 10,000 并发，通过 Kubernetes 横向扩展可支持百万级在线。
Q6: 数据库使用 MySQL 还是 PostgreSQL？

A: 当前版本使用 MySQL 8.0。PostgreSQL 支持正在开发中，预计 v2.1 版本发布。
Q7: 如何接入第三方支付？

A: 参考 ./Docs/Payment-Integration.md，已内置 Stripe、PayPal、支付宝、微信支付接口模板。
Q8: 是否支持多语言？

A: 客户端内置中、英、越、日、葡等 12 种语言，服务端通过配置文件扩展。

📝 更新日志 | Changelog

###查看完整更新日志：CHANGELOG.md
v1.2.0 (2026-08-01)

✨ 新增短牌德州 (Short Deck) 玩法
⚡ 优化 MTT 锦标赛匹配算法，延迟降低 40%
🐛 修复 iOS 客户端内存泄漏问题
🐳 新增 Docker Compose 一键部署

v1.1.0 (2026-06-15)

✨ 新增俱乐部联盟系统
✨ 新增代理分销三级返利
🔒 增强反作弊检测模块
v1.0.0 (2026-05-01)

🎉 首个稳定版本发布
✨ 支持经典德州、奥马哈、大菠萝
✨ 支持私人牌桌、朋友局、SNG/MTT


###🤝 贡献指南 | Contributing

我们欢迎所有形式的贡献！请阅读 CONTRIBUTING.md 了解如何参与。
🐛 提交 Bug
💡 功能建议
📝 完善文档





### 🌐 关键词索引 | SEO Keywords

方便搜索引擎索引，覆盖多语言搜索场景
中文关键词： 德州源码、德州扑克源码、德州俱乐部源码、德州游戏源码、德州MTT源码、德州撲克源碼、德州俱樂部系統、朋友局源码、私人牌桌、联盟系统、德州扑克平台、德州APP源码、扑克游戏引擎、扑克服务端源码、棋牌游戏源码、扑克平台搭建


English Keywords: Texas Hold'em Source Code, Poker Platform Source Code, Poker Club System, Multiplayer Poker Game, Online Poker Server, Poker Game Engine, Texas Hold'em GitHub, Poker Backend
Tiếng Việt: Mã nguồn Poker Texas Hold'em, Mã nguồn Club Poker, Game bài Poker, Hệ thống câu lạc bộ Poker

****📜 许可证 | License

本项目采用 自定义许可证。
📚 学习用途：允许自由下载、学习、研究
🏢 商业用途：需获取商业授权，请联系 ttpoker40@gmail.com
⚠️ 禁止：未经授权的转售、分发、SaaS 化运营
This software is provided for learning, research, and demonstration purposes only. Commercial use requires a separate license agreement.

****🔗 相关项目 | Related Projects

Awesome-Poker-Development — 扑克开发资源合集
Poker-Game-Engines — 扑克游戏引擎列表
Open-Source-Casino — 开源棋牌游戏项目
💡 如果你的项目使用了本平台的代码，欢迎提交 PR 添加到本列表！



****📞 联系我们 | Contact

| 渠道          | 联系方式                                                                           |
| ----------- | ------------------------------------------------------------------------------ |
| 📧 Email    | <ttpoker40@gmail.com>                                                          |
| 💬 Telegram | [@alibabama401](https://t.me/alibabama401)                                     |
| 🐛 Issues   | [GitHub Issues](https://github.com/alibabamayun888/poker-club-platform/issues) |

<p align="center">
  <b>⭐ 如果这个项目对你有帮助，请点个 Star 支持一下！⭐</b><br>
  <i>If this project helps you, please give it a star and share it with your friends!</i><br><br>
  <a href="https://github.com/alibabamayun888/poker-club-platform/stargazers">
    <img src="https://img.shields.io/github/stars/alibabamayun888/poker-club-platform?style=social" alt="Give a Star">
  </a>
</p>
