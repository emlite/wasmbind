#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "ExtendableEventInit.hpp"

namespace webbind {

class Request;

/// Dictionary type FetchEventInit
/// [`FetchEventInit`](https://developer.mozilla.org/en-US/docs/Web/API/FetchEventInit)
class FetchEventInit : public ExtendableEventInit {
  explicit FetchEventInit(Handle h) noexcept;
public:
    static FetchEventInit take_ownership(Handle h) noexcept;
    explicit FetchEventInit(const emlite::Val &val) noexcept;
    FetchEventInit() noexcept;
    [[nodiscard]] FetchEventInit clone() const noexcept;
    [[nodiscard]] Request request() const;
    void request(const Request& value);
    [[nodiscard]] jsbind::Promise<jsbind::Any> preloadResponse() const;
    void preloadResponse(const jsbind::Promise<jsbind::Any>& value);
    [[nodiscard]] jsbind::String clientId() const;
    void clientId(const jsbind::String& value);
    [[nodiscard]] jsbind::String resultingClientId() const;
    void resultingClientId(const jsbind::String& value);
    [[nodiscard]] jsbind::String replacesClientId() const;
    void replacesClientId(const jsbind::String& value);
    [[nodiscard]] jsbind::Promise<jsbind::Undefined> handled() const;
    void handled(const jsbind::Promise<jsbind::Undefined>& value);
};

} // namespace webbind