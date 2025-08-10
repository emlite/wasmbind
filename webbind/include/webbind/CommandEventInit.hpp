#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventInit.hpp"

namespace webbind {

class Element;

/// Dictionary type CommandEventInit
/// [`CommandEventInit`](https://developer.mozilla.org/en-US/docs/Web/API/CommandEventInit)
class CommandEventInit : public EventInit {
  explicit CommandEventInit(Handle h) noexcept;
public:
    static CommandEventInit take_ownership(Handle h) noexcept;
    explicit CommandEventInit(const emlite::Val &val) noexcept;
    CommandEventInit() noexcept;
    [[nodiscard]] CommandEventInit clone() const noexcept;
    [[nodiscard]] Element source() const;
    void source(const Element& value);
    [[nodiscard]] jsbind::String command() const;
    void command(const jsbind::String& value);
};

} // namespace webbind