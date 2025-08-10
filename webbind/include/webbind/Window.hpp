#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventTarget.hpp"
#include "WindowPostMessageOptions.hpp"
#include "OpenFilePickerOptions.hpp"
#include "SaveFilePickerOptions.hpp"
#include "DirectoryPickerOptions.hpp"
#include "QueryOptions.hpp"
#include "IdleRequestOptions.hpp"
#include "enums.hpp"

namespace webbind {

class Document;
class Location;
class History;
class Navigation;
class CustomElementRegistry;
class BarProp;
class Element;
class Navigator;
class CookieStore;
class Viewport;
class MediaQueryList;
class Screen;
class VisualViewport;
class CSSStyleDeclaration;
class DigitalGoodsService;
class DocumentPictureInPicture;
class Fence;
class FileSystemFileHandle;
class FileSystemDirectoryHandle;
class External;
class FontData;
class PortalHost;
class Selection;
class SharedStorage;
class SpeechSynthesis;
class LaunchQueue;
class ScreenDetails;
class Crypto;
class Storage;

/// Interface Window
/// [`Window`](https://developer.mozilla.org/en-US/docs/Web/API/Window)
class Window : public EventTarget {
    explicit Window(Handle h) noexcept;
public:
    explicit Window(const emlite::Val &val) noexcept;
    static Window take_ownership(Handle h) noexcept;
    [[nodiscard]] Window clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`Window.window`](https://developer.mozilla.org/en-US/docs/Web/API/Window/window)
    /// [`Window.window`](https://developer.mozilla.org/en-US/docs/Web/API/Window/window)
    [[nodiscard]] jsbind::Any window() const;
    /// [`Window.self`](https://developer.mozilla.org/en-US/docs/Web/API/Window/self)
    /// [`Window.self`](https://developer.mozilla.org/en-US/docs/Web/API/Window/self)
    [[nodiscard]] jsbind::Any self() const;
    /// [`Window.document`](https://developer.mozilla.org/en-US/docs/Web/API/Window/document)
    /// [`Window.document`](https://developer.mozilla.org/en-US/docs/Web/API/Window/document)
    [[nodiscard]] Document document() const;
    /// [`Window.name`](https://developer.mozilla.org/en-US/docs/Web/API/Window/name)
    /// [`Window.name`](https://developer.mozilla.org/en-US/docs/Web/API/Window/name)
    [[nodiscard]] jsbind::String name() const;
    /// Setter of the `name` attribute.
    /// [`Window.name`](https://developer.mozilla.org/en-US/docs/Web/API/Window/name)
    void name(const jsbind::String& value);
    /// [`Window.location`](https://developer.mozilla.org/en-US/docs/Web/API/Window/location)
    /// [`Window.location`](https://developer.mozilla.org/en-US/docs/Web/API/Window/location)
    [[nodiscard]] Location location() const;
    /// [`Window.history`](https://developer.mozilla.org/en-US/docs/Web/API/Window/history)
    /// [`Window.history`](https://developer.mozilla.org/en-US/docs/Web/API/Window/history)
    [[nodiscard]] History history() const;
    /// [`Window.navigation`](https://developer.mozilla.org/en-US/docs/Web/API/Window/navigation)
    /// [`Window.navigation`](https://developer.mozilla.org/en-US/docs/Web/API/Window/navigation)
    [[nodiscard]] Navigation navigation() const;
    /// [`Window.customElements`](https://developer.mozilla.org/en-US/docs/Web/API/Window/customElements)
    /// [`Window.customElements`](https://developer.mozilla.org/en-US/docs/Web/API/Window/customElements)
    [[nodiscard]] CustomElementRegistry customElements() const;
    /// [`Window.locationbar`](https://developer.mozilla.org/en-US/docs/Web/API/Window/locationbar)
    /// [`Window.locationbar`](https://developer.mozilla.org/en-US/docs/Web/API/Window/locationbar)
    [[nodiscard]] BarProp locationbar() const;
    /// [`Window.menubar`](https://developer.mozilla.org/en-US/docs/Web/API/Window/menubar)
    /// [`Window.menubar`](https://developer.mozilla.org/en-US/docs/Web/API/Window/menubar)
    [[nodiscard]] BarProp menubar() const;
    /// [`Window.personalbar`](https://developer.mozilla.org/en-US/docs/Web/API/Window/personalbar)
    /// [`Window.personalbar`](https://developer.mozilla.org/en-US/docs/Web/API/Window/personalbar)
    [[nodiscard]] BarProp personalbar() const;
    /// [`Window.scrollbars`](https://developer.mozilla.org/en-US/docs/Web/API/Window/scrollbars)
    /// [`Window.scrollbars`](https://developer.mozilla.org/en-US/docs/Web/API/Window/scrollbars)
    [[nodiscard]] BarProp scrollbars() const;
    /// [`Window.statusbar`](https://developer.mozilla.org/en-US/docs/Web/API/Window/statusbar)
    /// [`Window.statusbar`](https://developer.mozilla.org/en-US/docs/Web/API/Window/statusbar)
    [[nodiscard]] BarProp statusbar() const;
    /// [`Window.toolbar`](https://developer.mozilla.org/en-US/docs/Web/API/Window/toolbar)
    /// [`Window.toolbar`](https://developer.mozilla.org/en-US/docs/Web/API/Window/toolbar)
    [[nodiscard]] BarProp toolbar() const;
    /// [`Window.status`](https://developer.mozilla.org/en-US/docs/Web/API/Window/status)
    /// [`Window.status`](https://developer.mozilla.org/en-US/docs/Web/API/Window/status)
    [[nodiscard]] jsbind::String status() const;
    /// Setter of the `status` attribute.
    /// [`Window.status`](https://developer.mozilla.org/en-US/docs/Web/API/Window/status)
    void status(const jsbind::String& value);
    /// The close method.
    /// [`Window.close`](https://developer.mozilla.org/en-US/docs/Web/API/Window/close)
    jsbind::Undefined close();
    /// [`Window.closed`](https://developer.mozilla.org/en-US/docs/Web/API/Window/closed)
    /// [`Window.closed`](https://developer.mozilla.org/en-US/docs/Web/API/Window/closed)
    [[nodiscard]] bool closed() const;
    /// The stop method.
    /// [`Window.stop`](https://developer.mozilla.org/en-US/docs/Web/API/Window/stop)
    jsbind::Undefined stop();
    /// The focus method.
    /// [`Window.focus`](https://developer.mozilla.org/en-US/docs/Web/API/Window/focus)
    jsbind::Undefined focus();
    /// The blur method.
    /// [`Window.blur`](https://developer.mozilla.org/en-US/docs/Web/API/Window/blur)
    jsbind::Undefined blur();
    /// [`Window.frames`](https://developer.mozilla.org/en-US/docs/Web/API/Window/frames)
    /// [`Window.frames`](https://developer.mozilla.org/en-US/docs/Web/API/Window/frames)
    [[nodiscard]] jsbind::Any frames() const;
    /// [`Window.length`](https://developer.mozilla.org/en-US/docs/Web/API/Window/length)
    /// [`Window.length`](https://developer.mozilla.org/en-US/docs/Web/API/Window/length)
    [[nodiscard]] unsigned long length() const;
    /// [`Window.top`](https://developer.mozilla.org/en-US/docs/Web/API/Window/top)
    /// [`Window.top`](https://developer.mozilla.org/en-US/docs/Web/API/Window/top)
    [[nodiscard]] jsbind::Any top() const;
    /// [`Window.opener`](https://developer.mozilla.org/en-US/docs/Web/API/Window/opener)
    /// [`Window.opener`](https://developer.mozilla.org/en-US/docs/Web/API/Window/opener)
    [[nodiscard]] jsbind::Any opener() const;
    /// Setter of the `opener` attribute.
    /// [`Window.opener`](https://developer.mozilla.org/en-US/docs/Web/API/Window/opener)
    void opener(const jsbind::Any& value);
    /// [`Window.parent`](https://developer.mozilla.org/en-US/docs/Web/API/Window/parent)
    /// [`Window.parent`](https://developer.mozilla.org/en-US/docs/Web/API/Window/parent)
    [[nodiscard]] jsbind::Any parent() const;
    /// [`Window.frameElement`](https://developer.mozilla.org/en-US/docs/Web/API/Window/frameElement)
    /// [`Window.frameElement`](https://developer.mozilla.org/en-US/docs/Web/API/Window/frameElement)
    [[nodiscard]] Element frameElement() const;
    /// The open method.
    /// [`Window.open`](https://developer.mozilla.org/en-US/docs/Web/API/Window/open)
    jsbind::Any open();
    /// The open method.
    /// [`Window.open`](https://developer.mozilla.org/en-US/docs/Web/API/Window/open)
    jsbind::Any open(const jsbind::String& url);
    /// The open method.
    /// [`Window.open`](https://developer.mozilla.org/en-US/docs/Web/API/Window/open)
    jsbind::Any open(const jsbind::String& url, const jsbind::String& target);
    /// The open method.
    /// [`Window.open`](https://developer.mozilla.org/en-US/docs/Web/API/Window/open)
    jsbind::Any open(const jsbind::String& url, const jsbind::String& target, const jsbind::String& features);
    /// [`Window.navigator`](https://developer.mozilla.org/en-US/docs/Web/API/Window/navigator)
    /// [`Window.navigator`](https://developer.mozilla.org/en-US/docs/Web/API/Window/navigator)
    [[nodiscard]] Navigator navigator() const;
    /// [`Window.clientInformation`](https://developer.mozilla.org/en-US/docs/Web/API/Window/clientInformation)
    /// [`Window.clientInformation`](https://developer.mozilla.org/en-US/docs/Web/API/Window/clientInformation)
    [[nodiscard]] Navigator clientInformation() const;
    /// [`Window.originAgentCluster`](https://developer.mozilla.org/en-US/docs/Web/API/Window/originAgentCluster)
    /// [`Window.originAgentCluster`](https://developer.mozilla.org/en-US/docs/Web/API/Window/originAgentCluster)
    [[nodiscard]] bool originAgentCluster() const;
    /// The alert method.
    /// [`Window.alert`](https://developer.mozilla.org/en-US/docs/Web/API/Window/alert)
    jsbind::Undefined alert(const jsbind::String& message);
    /// The confirm method.
    /// [`Window.confirm`](https://developer.mozilla.org/en-US/docs/Web/API/Window/confirm)
    bool confirm();
    /// The confirm method.
    /// [`Window.confirm`](https://developer.mozilla.org/en-US/docs/Web/API/Window/confirm)
    bool confirm(const jsbind::String& message);
    /// The prompt method.
    /// [`Window.prompt`](https://developer.mozilla.org/en-US/docs/Web/API/Window/prompt)
    jsbind::String prompt();
    /// The prompt method.
    /// [`Window.prompt`](https://developer.mozilla.org/en-US/docs/Web/API/Window/prompt)
    jsbind::String prompt(const jsbind::String& message);
    /// The prompt method.
    /// [`Window.prompt`](https://developer.mozilla.org/en-US/docs/Web/API/Window/prompt)
    jsbind::String prompt(const jsbind::String& message, const jsbind::String& default_);
    /// The print method.
    /// [`Window.print`](https://developer.mozilla.org/en-US/docs/Web/API/Window/print)
    jsbind::Undefined print();
    /// The postMessage method.
    /// [`Window.postMessage`](https://developer.mozilla.org/en-US/docs/Web/API/Window/postMessage)
    jsbind::Undefined postMessage(const jsbind::Any& message);
    /// The postMessage method.
    /// [`Window.postMessage`](https://developer.mozilla.org/en-US/docs/Web/API/Window/postMessage)
    jsbind::Undefined postMessage(const jsbind::Any& message, const WindowPostMessageOptions& options);
    /// [`Window.credentialless`](https://developer.mozilla.org/en-US/docs/Web/API/Window/credentialless)
    /// [`Window.credentialless`](https://developer.mozilla.org/en-US/docs/Web/API/Window/credentialless)
    [[nodiscard]] bool credentialless() const;
    /// [`Window.orientation`](https://developer.mozilla.org/en-US/docs/Web/API/Window/orientation)
    /// [`Window.orientation`](https://developer.mozilla.org/en-US/docs/Web/API/Window/orientation)
    [[nodiscard]] short orientation() const;
    /// [`Window.onorientationchange`](https://developer.mozilla.org/en-US/docs/Web/API/Window/onorientationchange)
    /// [`Window.onorientationchange`](https://developer.mozilla.org/en-US/docs/Web/API/Window/onorientationchange)
    [[nodiscard]] jsbind::Any onorientationchange() const;
    /// Setter of the `onorientationchange` attribute.
    /// [`Window.onorientationchange`](https://developer.mozilla.org/en-US/docs/Web/API/Window/onorientationchange)
    void onorientationchange(const jsbind::Any& value);
    /// [`Window.cookieStore`](https://developer.mozilla.org/en-US/docs/Web/API/Window/cookieStore)
    /// [`Window.cookieStore`](https://developer.mozilla.org/en-US/docs/Web/API/Window/cookieStore)
    [[nodiscard]] CookieStore cookieStore() const;
    /// The navigate method.
    /// [`Window.navigate`](https://developer.mozilla.org/en-US/docs/Web/API/Window/navigate)
    jsbind::Undefined navigate(const SpatialNavigationDirection& dir);
    /// [`Window.viewport`](https://developer.mozilla.org/en-US/docs/Web/API/Window/viewport)
    /// [`Window.viewport`](https://developer.mozilla.org/en-US/docs/Web/API/Window/viewport)
    [[nodiscard]] Viewport viewport() const;
    /// The matchMedia method.
    /// [`Window.matchMedia`](https://developer.mozilla.org/en-US/docs/Web/API/Window/matchMedia)
    MediaQueryList matchMedia(const jsbind::String& query);
    /// [`Window.screen`](https://developer.mozilla.org/en-US/docs/Web/API/Window/screen)
    /// [`Window.screen`](https://developer.mozilla.org/en-US/docs/Web/API/Window/screen)
    [[nodiscard]] Screen screen() const;
    /// [`Window.visualViewport`](https://developer.mozilla.org/en-US/docs/Web/API/Window/visualViewport)
    /// [`Window.visualViewport`](https://developer.mozilla.org/en-US/docs/Web/API/Window/visualViewport)
    [[nodiscard]] VisualViewport visualViewport() const;
    /// The moveTo method.
    /// [`Window.moveTo`](https://developer.mozilla.org/en-US/docs/Web/API/Window/moveTo)
    jsbind::Undefined moveTo(long x, long y);
    /// The moveBy method.
    /// [`Window.moveBy`](https://developer.mozilla.org/en-US/docs/Web/API/Window/moveBy)
    jsbind::Undefined moveBy(long x, long y);
    /// The resizeTo method.
    /// [`Window.resizeTo`](https://developer.mozilla.org/en-US/docs/Web/API/Window/resizeTo)
    jsbind::Undefined resizeTo(long width, long height);
    /// The resizeBy method.
    /// [`Window.resizeBy`](https://developer.mozilla.org/en-US/docs/Web/API/Window/resizeBy)
    jsbind::Undefined resizeBy(long x, long y);
    /// [`Window.innerWidth`](https://developer.mozilla.org/en-US/docs/Web/API/Window/innerWidth)
    /// [`Window.innerWidth`](https://developer.mozilla.org/en-US/docs/Web/API/Window/innerWidth)
    [[nodiscard]] long innerWidth() const;
    /// [`Window.innerHeight`](https://developer.mozilla.org/en-US/docs/Web/API/Window/innerHeight)
    /// [`Window.innerHeight`](https://developer.mozilla.org/en-US/docs/Web/API/Window/innerHeight)
    [[nodiscard]] long innerHeight() const;
    /// [`Window.scrollX`](https://developer.mozilla.org/en-US/docs/Web/API/Window/scrollX)
    /// [`Window.scrollX`](https://developer.mozilla.org/en-US/docs/Web/API/Window/scrollX)
    [[nodiscard]] double scrollX() const;
    /// [`Window.pageXOffset`](https://developer.mozilla.org/en-US/docs/Web/API/Window/pageXOffset)
    /// [`Window.pageXOffset`](https://developer.mozilla.org/en-US/docs/Web/API/Window/pageXOffset)
    [[nodiscard]] double pageXOffset() const;
    /// [`Window.scrollY`](https://developer.mozilla.org/en-US/docs/Web/API/Window/scrollY)
    /// [`Window.scrollY`](https://developer.mozilla.org/en-US/docs/Web/API/Window/scrollY)
    [[nodiscard]] double scrollY() const;
    /// [`Window.pageYOffset`](https://developer.mozilla.org/en-US/docs/Web/API/Window/pageYOffset)
    /// [`Window.pageYOffset`](https://developer.mozilla.org/en-US/docs/Web/API/Window/pageYOffset)
    [[nodiscard]] double pageYOffset() const;
    /// The scroll method.
    /// [`Window.scroll`](https://developer.mozilla.org/en-US/docs/Web/API/Window/scroll)
    jsbind::Undefined scroll(double x, double y);
    /// The scrollTo method.
    /// [`Window.scrollTo`](https://developer.mozilla.org/en-US/docs/Web/API/Window/scrollTo)
    jsbind::Undefined scrollTo(double x, double y);
    /// The scrollBy method.
    /// [`Window.scrollBy`](https://developer.mozilla.org/en-US/docs/Web/API/Window/scrollBy)
    jsbind::Undefined scrollBy(double x, double y);
    /// [`Window.screenX`](https://developer.mozilla.org/en-US/docs/Web/API/Window/screenX)
    /// [`Window.screenX`](https://developer.mozilla.org/en-US/docs/Web/API/Window/screenX)
    [[nodiscard]] long screenX() const;
    /// [`Window.screenLeft`](https://developer.mozilla.org/en-US/docs/Web/API/Window/screenLeft)
    /// [`Window.screenLeft`](https://developer.mozilla.org/en-US/docs/Web/API/Window/screenLeft)
    [[nodiscard]] long screenLeft() const;
    /// [`Window.screenY`](https://developer.mozilla.org/en-US/docs/Web/API/Window/screenY)
    /// [`Window.screenY`](https://developer.mozilla.org/en-US/docs/Web/API/Window/screenY)
    [[nodiscard]] long screenY() const;
    /// [`Window.screenTop`](https://developer.mozilla.org/en-US/docs/Web/API/Window/screenTop)
    /// [`Window.screenTop`](https://developer.mozilla.org/en-US/docs/Web/API/Window/screenTop)
    [[nodiscard]] long screenTop() const;
    /// [`Window.outerWidth`](https://developer.mozilla.org/en-US/docs/Web/API/Window/outerWidth)
    /// [`Window.outerWidth`](https://developer.mozilla.org/en-US/docs/Web/API/Window/outerWidth)
    [[nodiscard]] long outerWidth() const;
    /// [`Window.outerHeight`](https://developer.mozilla.org/en-US/docs/Web/API/Window/outerHeight)
    /// [`Window.outerHeight`](https://developer.mozilla.org/en-US/docs/Web/API/Window/outerHeight)
    [[nodiscard]] long outerHeight() const;
    /// [`Window.devicePixelRatio`](https://developer.mozilla.org/en-US/docs/Web/API/Window/devicePixelRatio)
    /// [`Window.devicePixelRatio`](https://developer.mozilla.org/en-US/docs/Web/API/Window/devicePixelRatio)
    [[nodiscard]] double devicePixelRatio() const;
    /// The getComputedStyle method.
    /// [`Window.getComputedStyle`](https://developer.mozilla.org/en-US/docs/Web/API/Window/getComputedStyle)
    CSSStyleDeclaration getComputedStyle(const Element& elt);
    /// The getComputedStyle method.
    /// [`Window.getComputedStyle`](https://developer.mozilla.org/en-US/docs/Web/API/Window/getComputedStyle)
    CSSStyleDeclaration getComputedStyle(const Element& elt, const jsbind::String& pseudoElt);
    /// The getDigitalGoodsService method.
    /// [`Window.getDigitalGoodsService`](https://developer.mozilla.org/en-US/docs/Web/API/Window/getDigitalGoodsService)
    jsbind::Promise<DigitalGoodsService> getDigitalGoodsService(const jsbind::String& serviceProvider);
    /// [`Window.documentPictureInPicture`](https://developer.mozilla.org/en-US/docs/Web/API/Window/documentPictureInPicture)
    /// [`Window.documentPictureInPicture`](https://developer.mozilla.org/en-US/docs/Web/API/Window/documentPictureInPicture)
    [[nodiscard]] DocumentPictureInPicture documentPictureInPicture() const;
    /// [`Window.event`](https://developer.mozilla.org/en-US/docs/Web/API/Window/event)
    /// [`Window.event`](https://developer.mozilla.org/en-US/docs/Web/API/Window/event)
    [[nodiscard]] jsbind::Any event() const;
    /// [`Window.fence`](https://developer.mozilla.org/en-US/docs/Web/API/Window/fence)
    /// [`Window.fence`](https://developer.mozilla.org/en-US/docs/Web/API/Window/fence)
    [[nodiscard]] Fence fence() const;
    /// The showOpenFilePicker method.
    /// [`Window.showOpenFilePicker`](https://developer.mozilla.org/en-US/docs/Web/API/Window/showOpenFilePicker)
    jsbind::Promise<jsbind::TypedArray<FileSystemFileHandle>> showOpenFilePicker();
    /// The showOpenFilePicker method.
    /// [`Window.showOpenFilePicker`](https://developer.mozilla.org/en-US/docs/Web/API/Window/showOpenFilePicker)
    jsbind::Promise<jsbind::TypedArray<FileSystemFileHandle>> showOpenFilePicker(const OpenFilePickerOptions& options);
    /// The showSaveFilePicker method.
    /// [`Window.showSaveFilePicker`](https://developer.mozilla.org/en-US/docs/Web/API/Window/showSaveFilePicker)
    jsbind::Promise<FileSystemFileHandle> showSaveFilePicker();
    /// The showSaveFilePicker method.
    /// [`Window.showSaveFilePicker`](https://developer.mozilla.org/en-US/docs/Web/API/Window/showSaveFilePicker)
    jsbind::Promise<FileSystemFileHandle> showSaveFilePicker(const SaveFilePickerOptions& options);
    /// The showDirectoryPicker method.
    /// [`Window.showDirectoryPicker`](https://developer.mozilla.org/en-US/docs/Web/API/Window/showDirectoryPicker)
    jsbind::Promise<FileSystemDirectoryHandle> showDirectoryPicker();
    /// The showDirectoryPicker method.
    /// [`Window.showDirectoryPicker`](https://developer.mozilla.org/en-US/docs/Web/API/Window/showDirectoryPicker)
    jsbind::Promise<FileSystemDirectoryHandle> showDirectoryPicker(const DirectoryPickerOptions& options);
    /// The captureEvents method.
    /// [`Window.captureEvents`](https://developer.mozilla.org/en-US/docs/Web/API/Window/captureEvents)
    jsbind::Undefined captureEvents();
    /// The releaseEvents method.
    /// [`Window.releaseEvents`](https://developer.mozilla.org/en-US/docs/Web/API/Window/releaseEvents)
    jsbind::Undefined releaseEvents();
    /// [`Window.external`](https://developer.mozilla.org/en-US/docs/Web/API/Window/external)
    /// [`Window.external`](https://developer.mozilla.org/en-US/docs/Web/API/Window/external)
    [[nodiscard]] External external() const;
    /// The queryLocalFonts method.
    /// [`Window.queryLocalFonts`](https://developer.mozilla.org/en-US/docs/Web/API/Window/queryLocalFonts)
    jsbind::Promise<jsbind::TypedArray<FontData>> queryLocalFonts();
    /// The queryLocalFonts method.
    /// [`Window.queryLocalFonts`](https://developer.mozilla.org/en-US/docs/Web/API/Window/queryLocalFonts)
    jsbind::Promise<jsbind::TypedArray<FontData>> queryLocalFonts(const QueryOptions& options);
    /// [`Window.onappinstalled`](https://developer.mozilla.org/en-US/docs/Web/API/Window/onappinstalled)
    /// [`Window.onappinstalled`](https://developer.mozilla.org/en-US/docs/Web/API/Window/onappinstalled)
    [[nodiscard]] jsbind::Any onappinstalled() const;
    /// Setter of the `onappinstalled` attribute.
    /// [`Window.onappinstalled`](https://developer.mozilla.org/en-US/docs/Web/API/Window/onappinstalled)
    void onappinstalled(const jsbind::Any& value);
    /// [`Window.onbeforeinstallprompt`](https://developer.mozilla.org/en-US/docs/Web/API/Window/onbeforeinstallprompt)
    /// [`Window.onbeforeinstallprompt`](https://developer.mozilla.org/en-US/docs/Web/API/Window/onbeforeinstallprompt)
    [[nodiscard]] jsbind::Any onbeforeinstallprompt() const;
    /// Setter of the `onbeforeinstallprompt` attribute.
    /// [`Window.onbeforeinstallprompt`](https://developer.mozilla.org/en-US/docs/Web/API/Window/onbeforeinstallprompt)
    void onbeforeinstallprompt(const jsbind::Any& value);
    /// [`Window.ondeviceorientation`](https://developer.mozilla.org/en-US/docs/Web/API/Window/ondeviceorientation)
    /// [`Window.ondeviceorientation`](https://developer.mozilla.org/en-US/docs/Web/API/Window/ondeviceorientation)
    [[nodiscard]] jsbind::Any ondeviceorientation() const;
    /// Setter of the `ondeviceorientation` attribute.
    /// [`Window.ondeviceorientation`](https://developer.mozilla.org/en-US/docs/Web/API/Window/ondeviceorientation)
    void ondeviceorientation(const jsbind::Any& value);
    /// [`Window.ondeviceorientationabsolute`](https://developer.mozilla.org/en-US/docs/Web/API/Window/ondeviceorientationabsolute)
    /// [`Window.ondeviceorientationabsolute`](https://developer.mozilla.org/en-US/docs/Web/API/Window/ondeviceorientationabsolute)
    [[nodiscard]] jsbind::Any ondeviceorientationabsolute() const;
    /// Setter of the `ondeviceorientationabsolute` attribute.
    /// [`Window.ondeviceorientationabsolute`](https://developer.mozilla.org/en-US/docs/Web/API/Window/ondeviceorientationabsolute)
    void ondeviceorientationabsolute(const jsbind::Any& value);
    /// [`Window.ondevicemotion`](https://developer.mozilla.org/en-US/docs/Web/API/Window/ondevicemotion)
    /// [`Window.ondevicemotion`](https://developer.mozilla.org/en-US/docs/Web/API/Window/ondevicemotion)
    [[nodiscard]] jsbind::Any ondevicemotion() const;
    /// Setter of the `ondevicemotion` attribute.
    /// [`Window.ondevicemotion`](https://developer.mozilla.org/en-US/docs/Web/API/Window/ondevicemotion)
    void ondevicemotion(const jsbind::Any& value);
    /// [`Window.portalHost`](https://developer.mozilla.org/en-US/docs/Web/API/Window/portalHost)
    /// [`Window.portalHost`](https://developer.mozilla.org/en-US/docs/Web/API/Window/portalHost)
    [[nodiscard]] PortalHost portalHost() const;
    /// The requestIdleCallback method.
    /// [`Window.requestIdleCallback`](https://developer.mozilla.org/en-US/docs/Web/API/Window/requestIdleCallback)
    unsigned long requestIdleCallback(const jsbind::Function& callback);
    /// The requestIdleCallback method.
    /// [`Window.requestIdleCallback`](https://developer.mozilla.org/en-US/docs/Web/API/Window/requestIdleCallback)
    unsigned long requestIdleCallback(const jsbind::Function& callback, const IdleRequestOptions& options);
    /// The cancelIdleCallback method.
    /// [`Window.cancelIdleCallback`](https://developer.mozilla.org/en-US/docs/Web/API/Window/cancelIdleCallback)
    jsbind::Undefined cancelIdleCallback(unsigned long handle);
    /// The getSelection method.
    /// [`Window.getSelection`](https://developer.mozilla.org/en-US/docs/Web/API/Window/getSelection)
    Selection getSelection();
    /// [`Window.sharedStorage`](https://developer.mozilla.org/en-US/docs/Web/API/Window/sharedStorage)
    /// [`Window.sharedStorage`](https://developer.mozilla.org/en-US/docs/Web/API/Window/sharedStorage)
    [[nodiscard]] SharedStorage sharedStorage() const;
    /// [`Window.speechSynthesis`](https://developer.mozilla.org/en-US/docs/Web/API/Window/speechSynthesis)
    /// [`Window.speechSynthesis`](https://developer.mozilla.org/en-US/docs/Web/API/Window/speechSynthesis)
    [[nodiscard]] SpeechSynthesis speechSynthesis() const;
    /// [`Window.launchQueue`](https://developer.mozilla.org/en-US/docs/Web/API/Window/launchQueue)
    /// [`Window.launchQueue`](https://developer.mozilla.org/en-US/docs/Web/API/Window/launchQueue)
    [[nodiscard]] LaunchQueue launchQueue() const;
    /// The getScreenDetails method.
    /// [`Window.getScreenDetails`](https://developer.mozilla.org/en-US/docs/Web/API/Window/getScreenDetails)
    jsbind::Promise<ScreenDetails> getScreenDetails();
    /// [`Window.onbeforexrselect`](https://developer.mozilla.org/en-US/docs/Web/API/Window/onbeforexrselect)
    /// [`Window.onbeforexrselect`](https://developer.mozilla.org/en-US/docs/Web/API/Window/onbeforexrselect)
    [[nodiscard]] jsbind::Any onbeforexrselect() const;
    /// Setter of the `onbeforexrselect` attribute.
    /// [`Window.onbeforexrselect`](https://developer.mozilla.org/en-US/docs/Web/API/Window/onbeforexrselect)
    void onbeforexrselect(const jsbind::Any& value);
    /// [`Window.onportalactivate`](https://developer.mozilla.org/en-US/docs/Web/API/Window/onportalactivate)
    /// [`Window.onportalactivate`](https://developer.mozilla.org/en-US/docs/Web/API/Window/onportalactivate)
    [[nodiscard]] jsbind::Any onportalactivate() const;
    /// Setter of the `onportalactivate` attribute.
    /// [`Window.onportalactivate`](https://developer.mozilla.org/en-US/docs/Web/API/Window/onportalactivate)
    void onportalactivate(const jsbind::Any& value);
    /// [`Window.crypto`](https://developer.mozilla.org/en-US/docs/Web/API/Window/crypto)
    /// [`Window.crypto`](https://developer.mozilla.org/en-US/docs/Web/API/Window/crypto)
    [[nodiscard]] Crypto crypto() const;
    /// The requestAnimationFrame method.
    /// [`Window.requestAnimationFrame`](https://developer.mozilla.org/en-US/docs/Web/API/Window/requestAnimationFrame)
    unsigned long requestAnimationFrame(const jsbind::Function& callback);
    /// The cancelAnimationFrame method.
    /// [`Window.cancelAnimationFrame`](https://developer.mozilla.org/en-US/docs/Web/API/Window/cancelAnimationFrame)
    jsbind::Undefined cancelAnimationFrame(unsigned long handle);
    /// [`Window.sessionStorage`](https://developer.mozilla.org/en-US/docs/Web/API/Window/sessionStorage)
    /// [`Window.sessionStorage`](https://developer.mozilla.org/en-US/docs/Web/API/Window/sessionStorage)
    [[nodiscard]] Storage sessionStorage() const;
    /// [`Window.localStorage`](https://developer.mozilla.org/en-US/docs/Web/API/Window/localStorage)
    /// [`Window.localStorage`](https://developer.mozilla.org/en-US/docs/Web/API/Window/localStorage)
    [[nodiscard]] Storage localStorage() const;
};

} // namespace webbind