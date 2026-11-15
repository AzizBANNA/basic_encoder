# mini-codec

A minimal All-Intra video encoder/decoder in C++, structured like VTM but much simpler.

Pipeline: intra prediction -> residual -> integer DCT -> quantisation (QP) -> own entropy coder.

## Layout

| Folder | Content |
|---|---|
| `source/Lib/CommonLib` | Code shared by encoder and decoder (picture buffers, prediction, transform, quantisation) |
| `source/Lib/EncoderLib` | Encoder-only code (mode decision, entropy encoder, bitstream writer) |
| `source/Lib/DecoderLib` | Decoder-only code (entropy decoder, bitstream reader) |
| `source/Lib/Utilities` | YUV file I/O, config parsing |
| `source/App/EncoderApp` | `encoder` executable |
| `source/App/DecoderApp` | `decoder` executable |
| `tests/` | Unit tests |
| `cfg/` | Configuration files |
| `scripts/` | Evaluation scripts (QP sweeps, RD plots) |
| `sequences/` | Raw YUV test sequences (not tracked by git) |

## Requirements

- C++17 compiler (Apple clang 16)
- CMake >= 3.20, Ninja
- FFmpeg, YUView (for viewing/converting YUV)

## Test sequences

Raw 8-bit YUV 4:2:0, e.g. `sequences/foreman_cif.yuv` (352x288).
