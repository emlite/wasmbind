#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventInit.hpp"

namespace webbind {

class Element;

/// Dictionary type CommandEventInit
class CommandEventInit : public EventInit {
  explicit CommandEventInit(Handle h) noexcept;
public:
    static CommandEventInit take_ownership(Handle h) noexcept;
    explicit CommandEventInit(const emlite::Val &val) noexcept;
    CommandEventInit() noexcept;
    [[nodiscard]] CommandEventInit clone() const noexcept;
    /// Getter of the `source` attribute.
    [[nodiscard]] Element source() const;
    /// Setter of the `source` attribute.
    void source(const Element& value);
    /// Getter of the `command` attribute.
    [[nodiscard]] jsbind::String command() const;
    /// Setter of the `command` attribute.
    void command(const jsbind::String& value);
};

} // namespace webbind