#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class TextEncoderEncodeIntoResult;


class TextEncoderEncodeIntoResult : public emlite::Val {
  explicit TextEncoderEncodeIntoResult(Handle h) noexcept;
public:
    static TextEncoderEncodeIntoResult take_ownership(Handle h) noexcept;
    explicit TextEncoderEncodeIntoResult(const emlite::Val &val) noexcept;
    TextEncoderEncodeIntoResult() noexcept;
    TextEncoderEncodeIntoResult clone() const noexcept;
    long long read() const;
    void read(long long value);
    long long written() const;
    void written(long long value);
};

class TextEncoder : public emlite::Val {
    explicit TextEncoder(Handle h) noexcept;

public:
    explicit TextEncoder(const emlite::Val &val) noexcept;
    static TextEncoder take_ownership(Handle h) noexcept;

    TextEncoder clone() const noexcept;
    TextEncoder();
    jsbind::Uint8Array encode(const jsbind::USVString& input);
    TextEncoderEncodeIntoResult encodeInto(const jsbind::USVString& source, const jsbind::Uint8Array& destination);
    jsbind::DOMString encoding() const;
};

