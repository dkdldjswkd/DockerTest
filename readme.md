이 프로젝트는 C++ 프로그램을 Docker 컨테이너로 실행하는 방법을 실험하기 위해 만들어진 간단한 테스트 프로젝트입니다.

---

## 📋 프로젝트 목적

- C++ 프로그램을 Docker로 컨테이너화하는 방법 학습.
- Dockerfile과 Docker Compose로 C++ 빌드 및 실행 환경 구성.
- 컨테이너 내에서 C++ 프로그램 실행 테스트.

---

## 🛠️ 구성 요소

- **Dockerfile**: C++ 프로그램 빌드 및 실행용 이미지 생성.
- **docker-compose.yml**: 컨테이너 실행 환경 관리.
- **C++ 프로그램**: "hello"를 출력하는 간단한 테스트 프로그램.

---

## 🚀 사용 방법

1. 프로젝트 클론 및 실행:
   ```bash
   git clone https://github.com/dkdldjswkd/DockerTest.git
   cd DockerTest/Docker
   docker-compose up -d
