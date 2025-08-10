#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type MemoryAttributionContainer
class MemoryAttributionContainer : public emlite::Val {
  explicit MemoryAttributionContainer(Handle h) noexcept;
public:
    static MemoryAttributionContainer take_ownership(Handle h) noexcept;
    explicit MemoryAttributionContainer(const emlite::Val &val) noexcept;
    MemoryAttributionContainer() noexcept;
    [[nodiscard]] MemoryAttributionContainer clone() const noexcept;
    /// Getter of the `id` attribute.
    [[nodiscard]] jsbind::String id() const;
    /// Setter of the `id` attribute.
    void id(const jsbind::String& value);
    /// Getter of the `src` attribute.
    [[nodiscard]] jsbind::String src() const;
    /// Setter of the `src` attribute.
    void src(const jsbind::String& value);
};

} // namespace webbind