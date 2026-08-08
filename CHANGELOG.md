# Changelog

All notable changes to this project will be documented in this file.

The format is based on [Keep a Changelog](https://keepachangelog.com/en/1.1.0/),
and this project adheres to [Semantic Versioning](https://semver.org/spec/v2.0.0.html).

## [Unreleased]

### Added
- 新增 PostgreSQL 数据库支持（开发中）
- 新增 WebRTC 低延迟语音通话模块
- 新增 AI 机器人对手（Bot Player）系统

### Changed
- 优化牌桌渲染性能，帧率提升 15%

### Fixed
- 修复部分 Android 设备闪退问题

---

## [1.2.0] - 2026-08-01

### Added
- ✨ 新增短牌德州 (Short Deck / 6+ Hold'em) 玩法支持
- ✨ 新增 AOF (All-in or Fold) 极速模式
- ✨ 新增手牌保险 (All-in Insurance) 功能
- 🐳 新增 Docker Compose 一键部署方案
- 📊 新增 Prometheus + Grafana 监控面板
- 🌐 新增日语 (日本語) 客户端语言包

### Changed
- ⚡ 优化 MTT 锦标赛匹配算法，平均匹配延迟降低 40%
- ⚡ 重构 WebSocket 连接池，单节点并发上限提升至 12,000
- 🔧 升级 Protobuf 协议至 v3.21，减少 20% 网络传输体积

### Fixed
- 🐛 修复 iOS 客户端长时间运行后的内存泄漏问题
- 🐛 修复俱乐部联盟跨服消息同步延迟问题
- 🐛 修复大菠萝 (Pineapple) 模式下弃牌逻辑异常
- 🐛 修复 Redis 缓存穿透导致的 DB 压力峰值

### Security
- 🔒 增强反作弊检测模块，新增行为模式分析
- 🔒 升级 OpenSSL 至 3.0.12，修复 CVE-2024-XXXX

---

## [1.1.0] - 2026-06-15

### Added
- ✨ 新增俱乐部联盟 (Club Alliance) 系统，支持多俱乐部联合运营
- ✨ 新增代理分销三级返利机制
- ✨ 新增战绩统计与 Hand History 回放功能
- ✨ 新增语音视频聊天 (Voice & Video Chat) 模块
- ✨ 新增邀请返利 (Invite & Rebate) 裂变系统
- 📱 新增 H5 / WebGL 客户端支持

### Changed
- ⚡ 优化数据库查询，引入 Redis 集群缓存层
- ⚡ 重构匹配系统，支持动态扩缩容
- 🎨 更新 UI 主题，支持深色模式

### Fixed
- 🐛 修复 SNG 锦标赛倒计时异常
- 🐛 修复代理佣金结算精度丢失问题
- 🐛 修复 Unity 客户端在部分低端设备上的卡顿

---

## [1.0.0] - 2026-05-01

### Added
- 🎉 首个稳定版本正式发布
- ✨ 支持经典德州扑克 (No-Limit Texas Hold'em)
- ✨ 支持奥马哈 (Omaha Poker)
- ✨ 支持大菠萝 (Pineapple / Crazy Pineapple)
- ✨ 支持私人牌桌 (Private Table)
- ✨ 支持朋友局 (Friends Game / 约局)
- ✨ 支持 SNG 单桌锦标赛 (Sit & Go)
- ✨ 支持 MTT 多桌锦标赛 (Multi-Table Tournament)
- 💻 C++17 高性能游戏服务端
- 🎮 Unity 2022.3 LTS 跨平台客户端
- 🌐 多语言支持：中文、English、Tiếng Việt
- 🐳 Docker 容器化部署支持
- 📖 完整 API 文档与部署指南

---

## 版本号说明

版本号格式：`MAJOR.MINOR.PATCH`

- **MAJOR**：不兼容的 API 变更或重大架构升级
- **MINOR**：向下兼容的功能新增
- **PATCH**：向下兼容的问题修复

