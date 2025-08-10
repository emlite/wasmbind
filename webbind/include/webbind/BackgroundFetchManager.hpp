#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "BackgroundFetchOptions.hpp"

namespace webbind {

class BackgroundFetchRegistration;

/// Interface BackgroundFetchManager
/// [`BackgroundFetchManager`](https://developer.mozilla.org/en-US/docs/Web/API/BackgroundFetchManager)
class BackgroundFetchManager : public emlite::Val {
    explicit BackgroundFetchManager(Handle h) noexcept;
public:
    explicit BackgroundFetchManager(const emlite::Val &val) noexcept;
    static BackgroundFetchManager take_ownership(Handle h) noexcept;
    [[nodiscard]] BackgroundFetchManager clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The fetch method.
    /// [`BackgroundFetchManager.fetch`](https://developer.mozilla.org/en-US/docs/Web/API/BackgroundFetchManager/fetch)
    jsbind::Promise<BackgroundFetchRegistration> fetch(const jsbind::String& id, const jsbind::Any& requests);
    /// The fetch method.
    /// [`BackgroundFetchManager.fetch`](https://developer.mozilla.org/en-US/docs/Web/API/BackgroundFetchManager/fetch)
    jsbind::Promise<BackgroundFetchRegistration> fetch(const jsbind::String& id, const jsbind::Any& requests, const BackgroundFetchOptions& options);
    /// The get method.
    /// [`BackgroundFetchManager.get`](https://developer.mozilla.org/en-US/docs/Web/API/BackgroundFetchManager/get)
    jsbind::Promise<BackgroundFetchRegistration> get(const jsbind::String& id);
    /// The getIds method.
    /// [`BackgroundFetchManager.getIds`](https://developer.mozilla.org/en-US/docs/Web/API/BackgroundFetchManager/getIds)
    jsbind::Promise<jsbind::TypedArray<jsbind::String>> getIds();
};

} // namespace webbind