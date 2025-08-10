#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class CustomElementRegistry;

/// Dictionary type ImportNodeOptions
/// [`ImportNodeOptions`](https://developer.mozilla.org/en-US/docs/Web/API/ImportNodeOptions)
class ImportNodeOptions : public emlite::Val {
  explicit ImportNodeOptions(Handle h) noexcept;
public:
    static ImportNodeOptions take_ownership(Handle h) noexcept;
    explicit ImportNodeOptions(const emlite::Val &val) noexcept;
    ImportNodeOptions() noexcept;
    [[nodiscard]] ImportNodeOptions clone() const noexcept;
    [[nodiscard]] CustomElementRegistry customElementRegistry() const;
    void customElementRegistry(const CustomElementRegistry& value);
    [[nodiscard]] bool selfOnly() const;
    void selfOnly(bool value);
};

} // namespace webbind