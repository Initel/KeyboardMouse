# 🧠 Split Keyboard + Mouse Híbrido com Raspberry Pi Pico

Projeto open-source de um teclado mecânico **split** que também funciona como **mouse**, ideal para entusiastas de eletrônica, ergonomia e dispositivos DIY. Cada metade do teclado possui seu próprio **Raspberry Pi Pico**, comunicando-se via **jack P10** utilizando sinal **serial**.

---

## ✨ Destaques

- 🔌 **Teclado Split** com conexão entre as metades via **jack P10 (TRS)**.
- ⌨️ **Switches mecânicos low profile** para um design compacto e confortável.
- 🖱️ Funcionalidade de **mouse embutido**, controlável diretamente pelo teclado.
- 🧠 Cada metade equipada com um **Raspberry Pi Pico**.
- 🖨️ **Carcaça personalizada** impressa em **3D** usando uma **Anycubic Photon Mono X 6K**.
- 🔧 Modular, leve e ideal para personalizações futuras.

---

## 📦 Estrutura do Projeto

```
├── firmware/            # Código para os Raspberry Pi Pico (C++, MicroPython, etc.)
├── stl/                 # Arquivos STL para impressão 3D da carcaça
├── docs/                # Documentação e esquemas de conexão
├── images/              # Fotos e renderizações do projeto
└── README.md            # Este arquivo
```

---

## 🛠️ Tecnologias Utilizadas

- Raspberry Pi Pico (2x)
- Comunicação Serial via TRS (Jack P10)
- Switches mecânicos low profile
- Impressão 3D em resina (SLA)
- C++, CircuitPython ou MicroPython (dependendo da implementação final)
- [Opcional] Firmware customizado (ex: KMK, TinyUSB, etc.)

---

## 🧹 Próximos Passos

- [ ] Finalizar layout das teclas
- [ ] Implementar controle de mouse (movimento e cliques)
- [ ] Testar latência e estabilidade da comunicação serial
- [ ] Documentar o processo de montagem
- [ ] Publicar STLs e esquemas no repositório

---

## 📸 Prévia

*(Adicione aqui fotos ou renders do teclado quando disponíveis)*

---

## 📄 Licença

Este projeto é licenciado sob a **MIT License** – sinta-se livre para usar, modificar e contribuir!

---

Curtiu o projeto? Sinta-se à vontade para abrir *issues*, *pull requests* ou trocar uma ideia!

