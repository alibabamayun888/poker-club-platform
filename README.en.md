# Poker Club Platform Source Code

[简体中文](README.md) | [繁體中文](README.zh-TW.md) | [English](README.en.md)

<p align="center">
  <img src="https://img.shields.io/badge/C%2B%2B-17-00599C?style=flat-square&logo=c%2B%2B&logoColor=white" alt="C++17 server">
  <img src="https://img.shields.io/badge/Unity-2022+-000000?style=flat-square&logo=unity&logoColor=white" alt="Unity 2022 client">
  <img src="https://img.shields.io/badge/License-Custom-orange?style=flat-square" alt="Custom license">
  <img src="https://img.shields.io/badge/Platform-Windows%20%7C%20Linux%20%7C%20iOS%20%7C%20Android-brightgreen?style=flat-square" alt="Windows, Linux, iOS, and Android">
  <img src="https://img.shields.io/badge/Real--Time-WebSocket-blueviolet?style=flat-square" alt="WebSocket real-time communication">
</p>

<p align="center">
  <strong>Commercial-Grade Texas Hold'em Poker Club Platform Source Code</strong>
</p>

<p align="center">
  <a href="https://github.com/alibabamayun888/poker-club-platform/stargazers"><img src="https://img.shields.io/github/stars/alibabamayun888/poker-club-platform?style=social" alt="GitHub Stars"></a>
  <a href="https://github.com/alibabamayun888/poker-club-platform/network/members"><img src="https://img.shields.io/github/forks/alibabamayun888/poker-club-platform?style=social" alt="GitHub Forks"></a>
  <a href="https://github.com/alibabamayun888/poker-club-platform/issues"><img src="https://img.shields.io/github/issues/alibabamayun888/poker-club-platform?style=social" alt="GitHub Issues"></a>
</p>

## Contents

- [Overview](#overview)
- [Core Features](#core-features)
  - [Game Modes](#game-modes)
  - [Club System](#club-system)
  - [Technology Stack](#technology-stack)
- [Architecture and Demo](#architecture-and-demo)
- [Getting Started](#getting-started)
- [Project Structure](#project-structure)
- [API Documentation](#api-documentation)
- [FAQ](#faq)
- [Changelog](#changelog)
- [Contributing](#contributing)
- [License](#license)
- [Related Projects](#related-projects)
- [Contact](#contact)

## Overview

**Texas Hold'em Poker Club Platform** is a commercial-grade poker club platform source-code project built with a **C++17 high-performance server and a cross-platform Unity client**. It includes private tables, friends games, club alliances, MTT/SNG tournaments, and an agent distribution system.

| Language | Project Name |
|---|---|
| Chinese | 德州扑克俱乐部系统源码 / 德州游戏源码 / 朋友局源码 |
| English | Texas Hold'em Poker Club Source Code / Poker Platform Source Code |

## Core Features

### Game Modes

- **Classic Texas Hold'em** (No-Limit Texas Hold'em): standard 52-card gameplay
- **Short Deck** (Short Deck / 6+ Hold'em): faster gameplay without cards 2 through 5
- **Omaha Poker:** four-hole-card poker variant
- **Pineapple** (Pineapple / Crazy Pineapple): three-hole-card poker variant
- **MTT** (Multi-Table Tournament): multi-table tournament gameplay
- **SNG** (Sit & Go): a single-table tournament that starts when the table is full
- **AOF** (All-in or Fold): fast all-in-or-fold gameplay
- **Texas Cowboy:** a featured regional game mode

### Club System

- **Private Tables:** password-protected, invitation-only tables
- **Friends Games:** private games for invited players
- **Club Alliances:** cooperation between multiple clubs
- **Agent Distribution:** three-level distribution and automated settlement
- **Invitation Rewards:** invite and rebate mechanics
- **Voice and Video Chat:** real-time player interaction
- **All-in Insurance:** insurance options for all-in hands
- **Hand History and Statistics:** game records and performance review

### Technology Stack

| Layer | Technology | Description |
|---|---|---|
| Client | Unity 2022.3 LTS | iOS, Android, H5, WebGL, Windows, and macOS |
| Server | C++17 / Boost.Asio | 10,000+ concurrent connections on a single node |
| Protocol | WebSocket + Protobuf | Low-latency real-time communication, average latency below 50 ms |
| Database | MySQL 8.0 + Redis 7.0 | Replication and clustered caching |
| Message Queue | RabbitMQ / Kafka | Asynchronous processing and traffic buffering |
| Deployment | Docker + Kubernetes | Container deployment and horizontal scaling |
| Monitoring | Prometheus + Grafana | Real-time monitoring and alerts |

## Architecture and Demo

### System Architecture

<img width="1436" height="732" alt="Texas Hold'em Poker Club Platform architecture" src="https://github.com/user-attachments/assets/e8a788b3-88dd-4cc2-80ee-5fc12267c6ed">

### GIF Demo

<p align="center">
  <img src="./docs/demo.gif" alt="Texas Hold'em Poker Club Platform real-time game demo" width="800">
</p>

### Client Screens

<table>
  <tr><td align="center"><strong>Login</strong></td><td align="center"><strong>Lobby</strong></td><td align="center"><strong>Club</strong></td></tr>
  <tr>
    <td><img width="240" alt="Poker Club Platform login screen" src="https://github.com/user-attachments/assets/744e82b2-0a55-406f-897c-d1e37b7e9bdc"></td>
    <td><img width="240" alt="Texas Hold'em game lobby" src="https://github.com/user-attachments/assets/c0e96d59-6896-4d5e-98d2-3744aa64beab"></td>
    <td><img width="240" alt="Poker Club Platform club screen" src="https://github.com/user-attachments/assets/5bc66041-3697-45b1-ad02-08325cf9b389"></td>
  </tr>
  <tr><td align="center"><strong>Create Table</strong></td><td align="center"><strong>Poker Table</strong></td><td align="center"><strong>Profile</strong></td></tr>
  <tr>
    <td><img width="240" alt="Create a Texas Hold'em table" src="https://github.com/user-attachments/assets/93f4b22b-500b-45ae-8d82-6f5e8dc7ae55"></td>
    <td><img width="240" alt="Texas Hold'em real-time poker table" src="https://github.com/user-attachments/assets/752474e3-1e78-440f-9e2f-d587fbf9d6fc"></td>
    <td><img width="240" alt="Poker Club Platform player profile" src="https://github.com/user-attachments/assets/baf2e913-9d74-402a-9fbf-72fd499f5a23"></td>
  </tr>
</table>

## Getting Started

### Requirements

- **OS:** Ubuntu 20.04+ / CentOS 8+ / Windows Server 2019+
- **Compiler:** GCC 9.4+ / Clang 12+ / MSVC 2019+
- **Build:** CMake 3.20+
- **Database:** MySQL 8.0+ / Redis 6.0+
- **Client:** Unity 2022.3 LTS (required only for client development)

## Project Structure

```text
poker-club-platform/
├── Assets/              # Unity client source
│   └── Scripts/         # Client scripts
├── Server/              # C++ game server
├── docs/                # Deployment and API documentation
└── README.md
```

## API Documentation

The complete API documentation includes:

- REST API documentation for user registration, club management, and game records
- WebSocket protocol documentation for real-time game communication
- Unity SDK client integration guide

## FAQ

### Can this project be used commercially?

The source code is provided for learning, research, and demonstration only.

### Which platforms are supported?

The server supports Linux (Ubuntu/CentOS) and Windows Server. The client supports iOS, Android, H5 (WebGL), Windows, and macOS.

### Is secondary development supported?

Yes. The server uses a modular C++ architecture, and the client is built with Unity. Both include source comments and documentation.

### How do I upgrade to the latest version?

Run `git pull` to retrieve the latest code. Docker users can run `docker-compose pull && docker-compose up -d`.

### How many concurrent users are supported?

A single-node deployment supports 10,000 concurrent connections. Horizontal Kubernetes scaling can support a larger deployment.

### Which database is used?

The current version uses MySQL 8.0.

### How can a payment provider be integrated?

Refer to `./Docs/Payment-Integration.md`. The project describes templates for Stripe, PayPal, Alipay, and WeChat Pay integration.

### Which languages are supported?

The client includes Chinese, English, Korean, and other languages. Additional languages can be configured on the server.

## Changelog

See the complete [CHANGELOG.md](CHANGELOG.md).

### v1.2.0 (2026-08-01)

- Added Short Deck gameplay
- Improved the MTT matching algorithm and reduced latency by 40%
- Fixed an iOS client memory leak
- Added Docker Compose deployment

### v1.1.0 (2026-06-15)

- Added club alliances
- Added three-level agent distribution
- Improved anti-cheat detection

### v1.0.0 (2026-05-01)

- First stable release
- Added Classic Texas Hold'em, Omaha, and Pineapple
- Added private tables, friends games, SNG, and MTT

## Contributing

Contributions are welcome through:

- Bug reports
- Feature suggestions
- Documentation improvements

Read [CONTRIBUTING.md](CONTRIBUTING.md) for details.

## License

This project uses a custom license:

- **Learning:** downloading, studying, and researching the source is permitted
- **Commercial use:** separate commercial authorization is required; contact `ttpoker40@gmail.com`
- **Restricted:** unauthorized resale, redistribution, or SaaS operation is prohibited

This software is provided for learning, research, and demonstration purposes only. Commercial use requires a separate license agreement.

See [License.md](License.md) for the complete terms.

## Related Projects

- Awesome-Poker-Development: poker development resources
- Poker-Game-Engines: poker game-engine projects
- Open-Source-Casino: open-source card and casino projects

If your project uses this platform, you can submit a Pull Request to add it to this list.

## Contact

| Channel | Contact |
|---|---|
| Email | `ttpoker40@gmail.com` |
| Telegram | [@alibabama401](https://t.me/alibabama401) |
| Issues | [GitHub Issues](https://github.com/alibabamayun888/poker-club-platform/issues) |

<p align="center">
  <strong>If this project helps you, please give it a Star.</strong><br><br>
  <a href="https://github.com/alibabamayun888/poker-club-platform/stargazers"><img src="https://img.shields.io/github/stars/alibabamayun888/poker-club-platform?style=social" alt="Give a Star"></a>
</p>
