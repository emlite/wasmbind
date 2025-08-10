#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "MemoryAttributionContainer.hpp"

namespace webbind {

/// Dictionary type MemoryAttribution
class MemoryAttribution : public emlite::Val {
  explicit MemoryAttribution(Handle h) noexcept;
public:
    static MemoryAttribution take_ownership(Handle h) noexcept;
    explicit MemoryAttribution(const emlite::Val &val) noexcept;
    MemoryAttribution() noexcept;
    [[nodiscard]] MemoryAttribution clone() const noexcept;
    /// Getter of the `url` attribute.
    [[nodiscard]] jsbind::String url() const;
    /// Setter of the `url` attribute.
    void url(const jsbind::String& value);
    /// Getter of the `container` attribute.
    [[nodiscard]] MemoryAttributionContainer container() const;
    /// Setter of the `container` attribute.
    void container(const MemoryAttributionContainer& value);
    /// Getter of the `scope` attribute.
    [[nodiscard]] jsbind::String scope() const;
    /// Setter of the `scope` attribute.
    void scope(const jsbind::String& value);
};

} // namespace webbind