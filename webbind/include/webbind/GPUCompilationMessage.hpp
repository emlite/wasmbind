#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


/// The GPUCompilationMessage class.
/// [`GPUCompilationMessage`](https://developer.mozilla.org/en-US/docs/Web/API/GPUCompilationMessage)
class GPUCompilationMessage : public emlite::Val {
    explicit GPUCompilationMessage(Handle h) noexcept;

public:
    explicit GPUCompilationMessage(const emlite::Val &val) noexcept;
    static GPUCompilationMessage take_ownership(Handle h) noexcept;

    [[nodiscard]] GPUCompilationMessage clone() const noexcept;
    /// Getter of the `message` attribute.
    /// [`GPUCompilationMessage.message`](https://developer.mozilla.org/en-US/docs/Web/API/GPUCompilationMessage/message)
    [[nodiscard]] jsbind::String message() const;
    /// Getter of the `type` attribute.
    /// [`GPUCompilationMessage.type`](https://developer.mozilla.org/en-US/docs/Web/API/GPUCompilationMessage/type)
    [[nodiscard]] GPUCompilationMessageType type() const;
    /// Getter of the `lineNum` attribute.
    /// [`GPUCompilationMessage.lineNum`](https://developer.mozilla.org/en-US/docs/Web/API/GPUCompilationMessage/lineNum)
    [[nodiscard]] long long lineNum() const;
    /// Getter of the `linePos` attribute.
    /// [`GPUCompilationMessage.linePos`](https://developer.mozilla.org/en-US/docs/Web/API/GPUCompilationMessage/linePos)
    [[nodiscard]] long long linePos() const;
    /// Getter of the `offset` attribute.
    /// [`GPUCompilationMessage.offset`](https://developer.mozilla.org/en-US/docs/Web/API/GPUCompilationMessage/offset)
    [[nodiscard]] long long offset() const;
    /// Getter of the `length` attribute.
    /// [`GPUCompilationMessage.length`](https://developer.mozilla.org/en-US/docs/Web/API/GPUCompilationMessage/length)
    [[nodiscard]] long long length() const;
};

