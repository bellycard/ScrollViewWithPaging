//
//  ScrollViewWithPagingViewController.h
//  ScrollViewWithPaging
//
//  Created by Yuen Ying Kit on 18/05/2010.
//  Url: http://ykyuen.wordpress.com/2010/05/22/iphone-uiscrollview-with-paging-example/
//

#import <UIKit/UIKit.h>
#import "BaseViewController.h"
@interface ScrollViewWithPagingViewController : BaseViewController <UIScrollViewDelegate> {
	UIScrollView *scrollView;
	UIPageControl *pageControl;
    NSMutableArray *viewControllers;
	
    // To be used when scrolls originate from the UIPageControl
    BOOL pageControlUsed;
}

@property (nonatomic, retain) IBOutlet UIScrollView *scrollView;
@property (nonatomic, retain) IBOutlet UIPageControl *pageControl;
@property (nonatomic, retain) NSMutableArray *viewControllers;

- (IBAction)changePage:(id)sender;

@end

