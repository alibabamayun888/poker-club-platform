# Poker Club Platform｜德州撲克俱樂部系統原始碼｜德州撲克原始碼

[簡體中文](README.md) | [繁體中文](README.zh-TW.md) | [English](README.en.md)

<p align="center">
  <img src="https://img.shields.io/badge/C%2B%2B-17-00599C?style=flat-square&logo=c%2B%2B&logoColor=white" alt="C++17 服務端">
  <img src="https://img.shields.io/badge/Unity-2022+-000000?style=flat-square&logo=unity&logoColor=white" alt="Unity 2022 客戶端">
  <img src="https://img.shields.io/badge/License-Custom-orange?style=flat-square" alt="自訂授權條款">
  <img src="https://img.shields.io/badge/Platform-Windows%20%7C%20Linux%20%7C%20iOS%20%7C%20Android-brightgreen?style=flat-square" alt="支援 Windows、Linux、iOS 與 Android">
  <img src="https://img.shields.io/badge/Real--Time-WebSocket-blueviolet?style=flat-square" alt="WebSocket 即時通訊">
</p>

<p align="center">
  <strong>商業級德州撲克俱樂部系統原始碼｜Commercial-Grade Texas Hold'em Poker Club Source Code</strong>
</p>

<p align="center">
  <a href="https://github.com/alibabamayun888/poker-club-platform/stargazers"><img src="https://img.shields.io/github/stars/alibabamayun888/poker-club-platform?style=social" alt="GitHub Stars"></a>
  <a href="https://github.com/alibabamayun888/poker-club-platform/network/members"><img src="https://img.shields.io/github/forks/alibabamayun888/poker-club-platform?style=social" alt="GitHub Forks"></a>
  <a href="https://github.com/alibabamayun888/poker-club-platform/issues"><img src="https://img.shields.io/github/issues/alibabamayun888/poker-club-platform?style=social" alt="GitHub Issues"></a>
</p>

## 目錄

- [專案簡介](#專案簡介)
- [核心功能](#核心功能)
  - [遊戲玩法](#遊戲玩法)
  - [俱樂部系統](#俱樂部系統)
  - [技術架構](#技術架構)
- [系統架構與演示](#系統架構與演示)
- [快速開始](#快速開始)
- [專案結構](#專案結構)
- [API 文件](#api-文件)
- [常見問題](#常見問題)
- [更新記錄](#更新記錄)
- [貢獻指南](#貢獻指南)
- [授權條款](#授權條款)
- [相關專案](#相關專案)
- [聯絡我們](#聯絡我們)

## 專案簡介

**Texas Hold'em Poker Club Platform** 是一套完整的运用級德州撲克俱樂部系統原始碼，採用 **C++17 高效能服務端 + Unity 跨平台客戶端** 架構，支援私人牌桌、好友局、俱樂部聯盟、MTT/SNG 錦標賽與代理分銷系統。

| 語言 | 專案名稱 |
|---|---|
| 中文 | 德州撲克俱樂部系統原始碼 / 德州遊戲原始碼 / 好友局原始碼 |
| English | Texas Hold'em Poker Club Source Code / Poker Platform Source Code |

## 核心功能

### 遊戲玩法

- **經典德州撲克**（No-Limit Texas Hold'em）：標準 52 張牌玩法
- **短牌德州**（Short Deck / 6+ Hold'em）：移除 2-5，遊戲節奏更快
- **奧馬哈**（Omaha Poker）：四張底牌玩法
- **大菠蘿**（Pineapple / Crazy Pineapple）：三張底牌玩法
- **MTT 多桌錦標賽**（Multi-Table Tournament）：多桌錦標賽玩法
- **SNG 單桌錦標賽**（Sit & Go）：滿桌後開始的單桌錦標賽
- **AOF 全押或棄牌**（All-in or Fold）：快速全押或棄牌玩法
- **德州牛仔**（Texas Cowboy）：特色玩法

### 俱樂部系統

- **私人牌桌**：密碼保護與邀請制牌桌
- **好友局**：供受邀玩家參與的私人牌局
- **俱樂部聯盟**：多個俱樂部聯合營運
- **代理分銷系統**：三級分銷與自動結算
- **邀請回饋機制**：邀請與回饋功能
- **語音視訊聊天**：玩家即時互動
- **保險功能**：全押牌局保險選項
- **戰績統計**：牌局記錄與資料回顧

### 技術架構

| 層級 | 技術 | 說明 |
|---|---|---|
| 客戶端 | Unity 2022.3 LTS | 支援 iOS、Android、H5、WebGL、Windows 與 macOS |
| 服務端 | C++17 / Boost.Asio | 單節點支援 10,000+ 並行連線 |
| 網路協定 | WebSocket + Protobuf | 低延遲即時通訊，平均延遲低於 50 ms |
| 資料庫 | MySQL 8.0 + Redis 7.0 | 主從複寫與叢集快取 |
| 訊息佇列 | RabbitMQ / Kafka | 非同步處理與流量緩衝 |
| 部署 | Docker + Kubernetes | 容器化部署與水平擴充 |
| 監控 | Prometheus + Grafana | 即時效能監控與告警 |

## 系統架構與演示

### 系統架構圖

<img width="1436" height="732" alt="德州撲克俱樂部平台系統架構圖" src="https://github.com/user-attachments/assets/e8a788b3-88dd-4cc2-80ee-5fc12267c6ed">

### GIF 演示

<p align="center">
  <img src="./docs/demo.gif" alt="Texas Hold'em Poker Club Platform 即時牌局演示" width="800">
</p>

### 客戶端介面

<table>
  <tr><td align="center"><strong>登入</strong></td><td align="center"><strong>大廳</strong></td><td align="center"><strong>俱樂部</strong></td></tr>
  <tr>
    <td><img width="240" alt="德州撲克俱樂部平台登入介面" src="https://github.com/user-attachments/assets/744e82b2-0a55-406f-897c-d1e37b7e9bdc"></td>
    <td><img width="240" alt="德州撲克遊戲大廳" src="https://github.com/user-attachments/assets/c0e96d59-6896-4d5e-98d2-3744aa64beab"></td>
    <td><img width="240" alt="德州撲克俱樂部介面" src="https://github.com/user-attachments/assets/5bc66041-3697-45b1-ad02-08325cf9b389"></td>
  </tr>
  <tr><td align="center"><strong>建立牌局</strong></td><td align="center"><strong>牌局</strong></td><td align="center"><strong>個人中心</strong></td></tr>
  <tr>
    <td><img width="240" alt="建立德州撲克牌局介面" src="https://github.com/user-attachments/assets/93f4b22b-500b-45ae-8d82-6f5e8dc7ae55"></td>
    <td><img width="240" alt="Texas Hold'em 即時牌局介面" src="https://github.com/user-attachments/assets/752474e3-1e78-440f-9e2f-d587fbf9d6fc"></td>
    <td><img width="240" alt="德州撲克平台玩家個人中心" src="https://github.com/user-attachments/assets/baf2e913-9d74-402a-9fbf-72fd499f5a23"></td>
  </tr>
</table>

## 快速開始

### 環境需求

- **OS**：Ubuntu 20.04+ / CentOS 8+ / Windows Server 2019+
- **編譯器**：GCC 9.4+ / Clang 12+ / MSVC 2019+
- **建置工具**：CMake 3.20+
- **資料庫**：MySQL 8.0+ / Redis 6.0+
- **客戶端**：Unity 2022.3 LTS（僅客戶端開發需要）

## 專案結構

```text
poker-club-platform/
├── Assets/              # Unity 客戶端原始碼
│   └── Scripts/         # 客戶端腳本
├── Server/              # C++ 遊戲服務端
├── docs/                # 部署與 API 文件
└── README.md
```

## API 文件

完整 API 文件包含：

- 使用者註冊、俱樂部管理與戰績查詢的 REST API 文件
- 即時遊戲通訊的 WebSocket 協定文件
- Unity SDK 客戶端整合指南

## 常見問題

### 這個專案可以商用嗎？

本專案原始碼僅供學習、研究與展示使用。

### 支援哪些平台？

服務端支援 Linux（Ubuntu / CentOS）與 Windows Server。客戶端支援 iOS、Android、H5（WebGL）、Windows 與 macOS。

### 是否支援二次開發？

支援。服務端採用模組化 C++ 架構，客戶端以 Unity 開發，並提供原始碼註解與文件。

### 如何升級到最新版本？

執行 `git pull` 取得最新程式碼。Docker 使用者可執行 `docker-compose pull && docker-compose up -d`。

### 使用哪個資料庫？

目前版本使用 MySQL 8.0。

### 如何整合第三方支付？

請參考 `./Docs/Payment-Integration.md`。專案描述了 Stripe、PayPal、支付寶與微信支付介面範本。

### 支援哪些語言？

客戶端內建中文、英文、韓文等多種語言，服務端可透過設定檔擴充。

## 更新記錄

查看完整的 [CHANGELOG.md](CHANGELOG.md)。

### v1.2.0（2026-08-01）

- 新增短牌德州玩法
- 優化 MTT 錦標賽配對演算法，延遲降低 40%
- 修正 iOS 客戶端記憶體洩漏
- 新增 Docker Compose 一鍵部署

### v1.1.0（2026-06-15）

- 新增俱樂部聯盟系統
- 新增三級代理分銷
- 強化反作弊偵測

### v1.0.0（2026-05-01）

- 首個穩定版本
- 支援經典德州、奧馬哈與大菠蘿
- 支援私人牌桌、好友局、SNG 與 MTT

## 貢獻指南

歡迎透過以下方式參與專案：

- 回報 Bug
- 提出功能建議
- 完善專案文件

詳細說明請閱讀 [CONTRIBUTING.md](CONTRIBUTING.md)。

## 授權條款

本專案採用自訂授權條款：

- **學習用途**：允許下載、學習與研究
- **商業用途**：需要取得商業授權，請聯絡 `ttpoker40@gmail.com`
- **禁止事項**：未經授權的轉售、散布或 SaaS 化營運

This software is provided for learning, research, and demonstration purposes only. Commercial use requires a separate license agreement.

完整條款請閱讀 [License.md](License.md)。

## 相關專案

- Awesome-Poker-Development：撲克開發資源
- Poker-Game-Engines：撲克遊戲引擎專案
- Open-Source-Casino：開源棋牌與娛樂遊戲專案

如果你的專案使用了本平台程式碼，可提交 Pull Request 加入此列表。

## 聯絡我們

| 管道 | 聯絡方式 |
|---|---|
| Email | `ttpoker40@gmail.com` |
| Telegram | [@alibabama401](https://t.me/alibabama401) |
| Issues | [GitHub Issues](https://github.com/alibabamayun888/poker-club-platform/issues) |

<p align="center">
  <strong>如果這個專案對你有幫助，請給它一個 Star。</strong><br>
  <em>If this project helps you, please give it a star and share it with your friends.</em><br><br>
  <a href="https://github.com/alibabamayun888/poker-club-platform/stargazers"><img src="https://img.shields.io/github/stars/alibabamayun888/poker-club-platform?style=social" alt="Give a Star"></a>
</p>
