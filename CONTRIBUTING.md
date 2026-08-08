# Contributing to Texas Hold'em Poker Club Platform

首先，感谢你考虑为本项目做出贡献！🎉

无论你是修复 Bug、添加新功能、改进文档，还是分享使用经验，你的每一份贡献都让这个项目变得更好。

---

## 📋 目录

- [行为准则](#行为准则)
- [如何贡献](#如何贡献)
  - [报告 Bug](#报告-bug)
  - [建议新功能](#建议新功能)
  - [提交代码](#提交代码)
- [开发环境搭建](#开发环境搭建)
- [代码规范](#代码规范)
- [提交信息规范](#提交信息规范)
- [Pull Request 流程](#pull-request-流程)
- [社区交流](#社区交流)

---

## 行为准则

本项目遵循 [Contributor Covenant](https://www.contributor-covenant.org/) 行为准则。参与本项目即表示你同意遵守该准则。

核心原则：
- 尊重每一位参与者
- 欢迎不同背景和经验水平的贡献者
- 专注于建设性的技术讨论
- 不接受骚扰、歧视或攻击性言论

---

## 如何贡献

### 报告 Bug

如果你发现了 Bug，请通过 [GitHub Issues](https://github.com/alibabamayun888/poker-club-platform/issues) 提交报告。

提交前请先搜索已有 Issues，避免重复报告。

**Bug 报告模板：**

```markdown
**描述 Bug**
清晰简洁地描述 Bug 是什么。

**复现步骤**
1. 进入 '...'
2. 点击 '...'
3. 滚动到 '...'
4. 出现错误

**期望行为**
清晰描述你期望发生的行为。

**截图**
如果适用，请添加截图帮助说明问题。

**环境信息**
- OS: [例如 Ubuntu 22.04]
- 服务端版本: [例如 v1.2.0]
- 客户端版本: [例如 Unity 2022.3.20f1]
- 数据库: [例如 MySQL 8.0.33]
- 其他相关环境信息

**附加信息**
任何其他关于此问题的上下文信息。
```

### 建议新功能

有新想法？欢迎通过 [GitHub Issues](https://github.com/alibabamayun888/poker-club-platform/issues) 提交功能建议。

**功能建议模板：**

```markdown
**功能描述**
清晰简洁地描述你想要的功能。

**使用场景**
描述这个功能会在什么场景下使用，解决什么问题。

**期望方案**
描述你期望的实现方式（可选）。

**替代方案**
描述你考虑过的替代方案（可选）。

**附加信息**
任何其他相关信息、截图或参考链接。
```

### 提交代码

1. **Fork 本仓库** 到你的 GitHub 账号
2. **Clone 你的 Fork** 到本地
3. **创建新分支** (`git checkout -b feature/你的功能名` 或 `fix/修复描述`)
4. **编写代码** 并确保通过测试
5. **提交 Commit**（遵循 [提交信息规范](#提交信息规范)）
6. **Push 到你的 Fork**
7. **提交 Pull Request** 到本仓库的 `main` 分支

---

## 开发环境搭建

### 服务端开发环境

```bash
# 1. Fork 并 Clone 仓库
git clone https://github.com/你的用户名/poker-club-platform.git
cd poker-club-platform

# 2. 安装依赖（Ubuntu/Debian）
sudo apt update
sudo apt install -y build-essential cmake g++-9 libmysqlclient-dev libssl-dev libboost-all-dev

# 3. 安装 Redis 和 MySQL（如未安装）
sudo apt install -y redis-server mysql-server

# 4. 编译
cd Server
mkdir build && cd build
cmake .. -DCMAKE_BUILD_TYPE=Debug
make -j$(nproc)

# 5. 运行测试
ctest --output-on-failure
```

### 客户端开发环境

```bash
# 1. 安装 Unity Hub 和 Unity 2022.3 LTS
# 2. 在 Unity Hub 中打开 Client/ 目录
# 3. 等待依赖导入完成
# 4. 点击 Play 运行测试
```

### Docker 开发环境（推荐）

```bash
# 使用 Docker Compose 一键启动完整开发环境
docker-compose -f docker-compose.dev.yml up -d
```

---

## 代码规范

### C++ 服务端代码规范

- 遵循 [Google C++ Style Guide](https://google.github.io/styleguide/cppguide.html)
- 使用 `clang-format` 格式化代码（项目根目录已提供 `.clang-format`）
- 所有公共 API 必须添加 Doxygen 风格注释
- 内存管理：优先使用智能指针，避免裸 `new/delete`
- 线程安全：共享数据必须加锁保护，优先使用 `std::mutex` 和 `std::lock_guard`

```cpp
/**
 * @brief 创建一个新的牌桌
 * @param config 牌桌配置参数
 * @return 牌桌实例指针，创建失败返回 nullptr
 * @throws std::invalid_argument 当配置参数非法时
 */
std::shared_ptr<PokerTable> CreateTable(const TableConfig& config);
```

### C# 客户端代码规范

- 遵循 [Microsoft C# Coding Conventions](https://docs.microsoft.com/en-us/dotnet/csharp/fundamentals/coding-style/coding-conventions)
- 使用 `private` 字段以下划线开头（`_playerName`）
- 公共属性和方法使用 PascalCase
- UI 事件处理使用 `On` 前缀（`OnButtonClick`）

### 通用规范

- 文件编码：UTF-8
- 行尾符：LF（Unix 风格）
- 缩进：4 个空格（禁止使用 Tab）
- 最大行宽：120 个字符

---

## 提交信息规范

我们使用 [Conventional Commits](https://www.conventionalcommits.org/) 规范。

### 格式

```
<type>(<scope>): <subject>

<body>

<footer>
```

### Type 说明

| Type | 含义 | 适用场景 |
|------|------|---------|
| `feat` | 新功能 | 新增游戏玩法、新增 API |
| `fix` | Bug 修复 | 修复逻辑错误、修复崩溃 |
| `docs` | 文档更新 | README、API 文档、注释 |
| `style` | 代码格式 | 格式化、分号、空行等不影响逻辑的改变 |
| `refactor` | 重构 | 代码重构，既不修复 Bug 也不添加功能 |
| `perf` | 性能优化 | 提升速度、降低内存占用 |
| `test` | 测试相关 | 添加或修改测试代码 |
| `chore` | 构建/工具 | 构建脚本、依赖更新、CI 配置 |
| `security` | 安全修复 | 修复安全漏洞 |

### Scope 说明

- `server` — 服务端代码
- `client` — Unity 客户端
- `proto` — 通信协议
- `db` — 数据库相关
- `network` — 网络层
- `docs` — 文档
- `ci` — CI/CD 配置

### 示例

```
feat(server): 新增短牌德州玩法支持

- 实现 ShortDeckPoker 类继承自 BasePoker
- 修改牌组生成逻辑，去除 2-5 牌面
- 更新牌型判断规则（顺子 A-6-7-8-9 有效）

Closes #123
```

```
fix(client): 修复 iOS 内存泄漏

- 修复 Texture2D 未释放导致的内存持续增长
- 在 OnDestroy 中显式调用 Resources.UnloadUnusedAssets()

Fixes #456
```

```
docs: 更新 Docker 部署指南

- 补充 ARM64 架构支持说明
- 添加常见问题排查章节
```

---

## Pull Request 流程

### 提交前检查清单

- [ ] 代码已通过本地编译和测试
- [ ] 新增功能包含对应的单元测试
- [ ] 所有测试用例通过 (`ctest` 或 Unity Test Runner)
- [ ] 代码已通过 `clang-format` 或 C# 格式化工具
- [ ] 提交信息符合 [Conventional Commits](#提交信息规范)
- [ ] 文档已同步更新（README、API 文档等）
- [ ] 没有引入新的编译警告

### PR 标题格式

```
<type>(<scope>): <简洁描述>
```

例如：
- `feat(server): 新增俱乐部联盟系统`
- `fix(client): 修复 Android 闪退问题`
- `docs: 补充 API 接口文档`

### PR 描述模板

```markdown
## 变更内容
简要描述本次 PR 的主要变更。

## 关联 Issue
Fixes # (issue 编号)

## 测试情况
- [ ] 本地测试通过
- [ ] 单元测试通过
- [ ] 集成测试通过

## 截图（如适用）
添加相关截图或录屏。

## 检查清单
- [ ] 代码符合项目规范
- [ ] 文档已更新
- [ ] 无新引入的警告或错误
```

### 审查流程

1. 提交 PR 后，维护者会在 **48 小时内** 进行初步审查
2. 可能需要根据反馈进行修改
3. 所有审查意见解决后，维护者会合并 PR
4. 合并后你的贡献会出现在 [Contributors](https://github.com/alibabamayun888/poker-club-platform/graphs/contributors) 页面

---

## 社区交流

| 渠道 | 链接/方式 | 用途 |
|------|----------|------|
| GitHub Issues | [Issues](https://github.com/alibabamayun888/poker-club-platform/issues) | Bug 报告、功能建议 |
| GitHub Discussions | [Discussions](https://github.com/alibabamayun888/poker-club-platform/discussions) | 技术讨论、使用问答 |
| Telegram | [@alibabama401](https://t.me/alibabama401) | 即时交流 |
| Email | ttpoker40@gmail.com | 商务合作、安全漏洞报告 |

---

## 贡献者荣誉墙

感谢所有为本项目做出贡献的开发者！

> 你的名字将出现在这里 🌟

---

再次感谢你的贡献！让我们一起打造最好的开源扑克平台！🃏
