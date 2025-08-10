#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type MemoryAttributionContainer
/// [`MemoryAttributionContainer`](https://developer.mozilla.org/en-US/docs/Web/API/MemoryAttributionContainer)
class MemoryAttributionContainer : public emlite::Val {
  explicit MemoryAttributionContainer(Handle h) noexcept;
public:
    static MemoryAttributionContainer take_ownership(Handle h) noexcept;
    explicit MemoryAttributionContainer(const emlite::Val &val) noexcept;
    MemoryAttributionContainer() noexcept;
    [[nodiscard]] MemoryAttributionContainer clone() const noexcept;
    [[nodiscard]] jsbind::String id() const;
    void id(const jsbind::String& value);
    [[nodiscard]] jsbind::String src() const;
    void src(const jsbind::String& value);
};

} // namespace webbind