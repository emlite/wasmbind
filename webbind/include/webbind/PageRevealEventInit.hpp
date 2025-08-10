#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventInit.hpp"

namespace webbind {

class ViewTransition;

/// Dictionary type PageRevealEventInit
/// [`PageRevealEventInit`](https://developer.mozilla.org/en-US/docs/Web/API/PageRevealEventInit)
class PageRevealEventInit : public EventInit {
  explicit PageRevealEventInit(Handle h) noexcept;
public:
    static PageRevealEventInit take_ownership(Handle h) noexcept;
    explicit PageRevealEventInit(const emlite::Val &val) noexcept;
    PageRevealEventInit() noexcept;
    [[nodiscard]] PageRevealEventInit clone() const noexcept;
    [[nodiscard]] ViewTransition viewTransition() const;
    void viewTransition(const ViewTransition& value);
};

} // namespace webbind