#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class WorkletOptions;


class WorkletOptions : public emlite::Val {
  explicit WorkletOptions(Handle h) noexcept;
public:
    static WorkletOptions take_ownership(Handle h) noexcept;
    explicit WorkletOptions(const emlite::Val &val) noexcept;
    WorkletOptions() noexcept;
    [[nodiscard]] WorkletOptions clone() const noexcept;
    [[nodiscard]] RequestCredentials credentials() const;
    void credentials(const RequestCredentials& value);
};

/// The Worklet class.
/// [`Worklet`](https://developer.mozilla.org/en-US/docs/Web/API/Worklet)
class Worklet : public emlite::Val {
    explicit Worklet(Handle h) noexcept;

public:
    explicit Worklet(const emlite::Val &val) noexcept;
    static Worklet take_ownership(Handle h) noexcept;

    [[nodiscard]] Worklet clone() const noexcept;
    /// The addModule method.
    /// [`Worklet.addModule`](https://developer.mozilla.org/en-US/docs/Web/API/Worklet/addModule)
    jsbind::Promise<jsbind::Undefined> addModule(const jsbind::String& moduleURL);
    /// The addModule method.
    /// [`Worklet.addModule`](https://developer.mozilla.org/en-US/docs/Web/API/Worklet/addModule)
    jsbind::Promise<jsbind::Undefined> addModule(const jsbind::String& moduleURL, const WorkletOptions& options);
};

