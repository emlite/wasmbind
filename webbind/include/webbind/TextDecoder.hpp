#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class TextDecodeOptions;


class TextDecodeOptions : public emlite::Val {
  explicit TextDecodeOptions(Handle h) noexcept;
public:
    static TextDecodeOptions take_ownership(Handle h) noexcept;
    explicit TextDecodeOptions(const emlite::Val &val) noexcept;
    TextDecodeOptions() noexcept;
    TextDecodeOptions clone() const noexcept;
    bool stream() const;
    void stream(bool value);
};

class TextDecoder : public emlite::Val {
    explicit TextDecoder(Handle h) noexcept;

public:
    explicit TextDecoder(const emlite::Val &val) noexcept;
    static TextDecoder take_ownership(Handle h) noexcept;

    TextDecoder clone() const noexcept;
    TextDecoder();
    TextDecoder(const jsbind::DOMString& label);
    TextDecoder(const jsbind::DOMString& label, const jsbind::Any& options);
    jsbind::USVString decode();
    jsbind::USVString decode(const jsbind::Any& input);
    jsbind::USVString decode(const jsbind::Any& input, const TextDecodeOptions& options);
    jsbind::DOMString encoding() const;
    bool fatal() const;
    bool ignoreBOM() const;
};

