## WEPopover Fork

This is [my](http://github.com/alexcoplan) fork of [WEPopover](http://github.com/werner77/WEPopover).

Originally created in response to [this issue](http://github.com/werner77/WEPopover/issues/13), this project demonstrates how to use a delegate to dismiss the popover when the user selects a row in the popover's table view.

I'm also going to aim to push any general improvements I find to this repo, especially since it appears the main repository isn't being maintained any more.

## Original Readme

WEPopover is an attempt to create a generalized version of the UIPopoverController which is unfortunately only available for the iPad. WEPopover should work on any device with iOS >= 3.2. If you want to use it with iOS < 3.2 you need to implement the @property(nonatomic, readwrite) CGSize contentSizeForViewInPopover for the content view controllers you want to present manually.

The project contains some sample code illustrating the usage of the classes, but the only classes you actually need if you want to use the library reside in the "Popover" group in the project tree.

Please have a look at the UIPopoverController documentation on details of the API.
Additions to the UIPopoverController API include:

- Support for custom background views: specify the WEPopoverContainerViewProperties for the view to use as background. The properties specify the images to use for the stretchable background and the arrows (four directions). It also specifies the margins and the cap sizes for resizing the background. A default image with corresponding arrows are supplied with the project.
- Support for limiting the area to display the popover: implement the protocol WEPopoverParentView for the view you supply to the presentPopover method and implement the - (CGRect)displayAreaForPopover.
- Support for repositioning an existing popover (by passing the need to dismiss it and present a new one). See the 'repositionPopoverFromRect' method in WEPopoverController.

