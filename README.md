# 🃏 Texas Hold'em Poker Club Platform

&lt;p align="center"&gt;
  &lt;b&gt;🏆 商业级德州扑克俱乐部系统 | Commercial-Grade Texas Hold'em Poker Club System&lt;/b&gt;&lt;br&gt;
  &lt;b&gt;德州撲克俱樂部系統 | Sistema de Club de Póker Texas Hold'em&lt;/b&gt;
&lt;/p&gt;


---

## 📌 项目简介 | Project Introduction

**Texas Hold'em Poker Club Platform** 是一套完整的商业级德州扑克游戏平台源码，支持 **俱乐部模式、朋友局、私人牌桌、联盟系统、MTT/SNG锦标赛** 等多种玩法。

| 中文 | English |
|------|---------|
| 德州扑克俱乐部系统源码 | Texas Hold'em Poker Club Source Code |
| 德州撲克俱樂部系統 | Texas Hold'em Poker Club System |
| 德州游戏源码 | Texas Poker Game Source Code |
| 德州扑克完整解决方案 | Texas Hold'em Complete Solution |

---

## ✨ 核心特性 | Key Features

### 🎮 游戏玩法 | Game Modes
- ♠️ **经典德州扑克** (No-Limit Texas Hold'em)
- 🃏 **短牌德州** (Short Deck / 6+ Hold'em)
- 🏇 **奥马哈** (Omaha Poker)
- 🍍 **大菠萝** (Pineapple)
- 🏆 **MTT 多桌锦标赛** (Multi-Table Tournament)
- ⚡ **SNG 单桌锦标赛** (Sit & Go)
- 🎯 **AOF 全押或弃牌** (All-in or Fold)
- 🤠 **德州牛仔** (Texas Cowboy)

### 🏢 俱乐部系统 | Club System
- ✅ **私人牌桌** (Private Table)
- ✅ **朋友局** (Friends Game / 约局)
- ✅ **俱乐部联盟** (Club Alliance)
- ✅ **代理分销系统** (Agent & Affiliate System)
- ✅ **邀请返利机制** (Invite & Rebate System)
- ✅ **语音视频聊天** (Voice & Video Chat)

### 🖥️ 技术架构 | Tech Stack
| 层级 | 技术 | 说明 |
|------|------|------|
| **客户端** | Unity 2022+ | 支持 iOS / Android / H5 / WebGL |
| **服务端** | C++17 | 高性能游戏服务器，百万级并发 |
| **网络层** | WebSocket + TCP | 实时通信，低延迟 |
| **数据库** | MySQL + Redis | 数据持久化 + 高速缓存 |
| **架构** | 分布式微服务 | 可横向扩展 |

---

## 🚀 快速开始 | Quick Start

### 环境要求 | Requirements
- C++17 编译器 (GCC 9+ / MSVC 2019+ / Clang 12+)
- CMake 3.20+
- MySQL 8.0+
- Redis 6.0+
- Unity 2022.3 LTS (客户端)

### 编译服务端 | Build Server

git clone https://github.com/masterai-top/Texas-Holdem-Poker-Club-Platform.git
cd Texas-Holdem-Poker-Club-Platform
mkdir build && cd build
cmake ..
make -j$(nproc)


### 运行 | Run

./GameServer --config=../config/server.conf

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



### 🌐 关键词索引 | SEO Keywords

方便搜索引擎索引，覆盖多语言搜索场景
中文关键词： 德州源码、德州扑克源码、德州俱乐部源码、德州游戏源码、德州MTT源码、德州撲克源碼、德州俱樂部系統、朋友局源码、私人牌桌、联盟系统、德州扑克平台、德州APP源码
English Keywords: Texas Hold'em Source Code, Poker Platform Source Code, Poker Club System, Multiplayer Poker Game, Online Poker Server, Poker Game Engine, Texas Hold'em GitHub, Poker Backend
Tiếng Việt: Mã nguồn Poker Texas Hold'em, Mã nguồn Club Poker, Game bài Poker, Hệ thống câu lạc bộ Poker

****📜 许可证 | License

本项目仅供学习、研究和演示使用。详见 LICENSE 文件。
This software is provided for learning, research, and demonstration purposes only.

****📞 联系我们 | Contact

📧 Email: [ttpoker40@gmail.com]
💬 Telegram: [@alibabama401]

<p align="center">
  ⭐ <b>如果这个项目对你有帮助，请点个 Star 支持一下！</b> ⭐<br>
  <i>If this project helps you, please give it a star!</i>
</p>
