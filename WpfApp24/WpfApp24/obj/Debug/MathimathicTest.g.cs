﻿#pragma checksum "..\..\MathimathicTest.xaml" "{8829d00f-11b8-4213-878b-770e8597ac16}" "057375212E6E3C0F61F8EBD9FA6F2230CF427D61BACAA2C4F3B6977774CAF2C8"
//------------------------------------------------------------------------------
// <auto-generated>
//     Этот код создан программой.
//     Исполняемая версия:4.0.30319.42000
//
//     Изменения в этом файле могут привести к неправильной работе и будут потеряны в случае
//     повторной генерации кода.
// </auto-generated>
//------------------------------------------------------------------------------

using System;
using System.Diagnostics;
using System.Windows;
using System.Windows.Automation;
using System.Windows.Controls;
using System.Windows.Controls.Primitives;
using System.Windows.Data;
using System.Windows.Documents;
using System.Windows.Ink;
using System.Windows.Input;
using System.Windows.Markup;
using System.Windows.Media;
using System.Windows.Media.Animation;
using System.Windows.Media.Effects;
using System.Windows.Media.Imaging;
using System.Windows.Media.Media3D;
using System.Windows.Media.TextFormatting;
using System.Windows.Navigation;
using System.Windows.Shapes;
using System.Windows.Shell;
using WpfApp24;


namespace WpfApp24 {
    
    
    /// <summary>
    /// MathimathicTest
    /// </summary>
    public partial class MathimathicTest : System.Windows.Window, System.Windows.Markup.IComponentConnector {
        
        
        #line 19 "..\..\MathimathicTest.xaml"
        [System.Diagnostics.CodeAnalysis.SuppressMessageAttribute("Microsoft.Performance", "CA1823:AvoidUnusedPrivateFields")]
        internal System.Windows.Controls.TextBlock question;
        
        #line default
        #line hidden
        
        
        #line 20 "..\..\MathimathicTest.xaml"
        [System.Diagnostics.CodeAnalysis.SuppressMessageAttribute("Microsoft.Performance", "CA1823:AvoidUnusedPrivateFields")]
        internal System.Windows.Controls.StackPanel stack;
        
        #line default
        #line hidden
        
        
        #line 21 "..\..\MathimathicTest.xaml"
        [System.Diagnostics.CodeAnalysis.SuppressMessageAttribute("Microsoft.Performance", "CA1823:AvoidUnusedPrivateFields")]
        internal System.Windows.Controls.CheckBox answer1;
        
        #line default
        #line hidden
        
        
        #line 22 "..\..\MathimathicTest.xaml"
        [System.Diagnostics.CodeAnalysis.SuppressMessageAttribute("Microsoft.Performance", "CA1823:AvoidUnusedPrivateFields")]
        internal System.Windows.Controls.CheckBox answer2;
        
        #line default
        #line hidden
        
        
        #line 23 "..\..\MathimathicTest.xaml"
        [System.Diagnostics.CodeAnalysis.SuppressMessageAttribute("Microsoft.Performance", "CA1823:AvoidUnusedPrivateFields")]
        internal System.Windows.Controls.CheckBox answer3;
        
        #line default
        #line hidden
        
        
        #line 24 "..\..\MathimathicTest.xaml"
        [System.Diagnostics.CodeAnalysis.SuppressMessageAttribute("Microsoft.Performance", "CA1823:AvoidUnusedPrivateFields")]
        internal System.Windows.Controls.CheckBox answer4;
        
        #line default
        #line hidden
        
        private bool _contentLoaded;
        
        /// <summary>
        /// InitializeComponent
        /// </summary>
        [System.Diagnostics.DebuggerNonUserCodeAttribute()]
        [System.CodeDom.Compiler.GeneratedCodeAttribute("PresentationBuildTasks", "4.0.0.0")]
        public void InitializeComponent() {
            if (_contentLoaded) {
                return;
            }
            _contentLoaded = true;
            System.Uri resourceLocater = new System.Uri("/WpfApp24;component/mathimathictest.xaml", System.UriKind.Relative);
            
            #line 1 "..\..\MathimathicTest.xaml"
            System.Windows.Application.LoadComponent(this, resourceLocater);
            
            #line default
            #line hidden
        }
        
        [System.Diagnostics.DebuggerNonUserCodeAttribute()]
        [System.CodeDom.Compiler.GeneratedCodeAttribute("PresentationBuildTasks", "4.0.0.0")]
        [System.ComponentModel.EditorBrowsableAttribute(System.ComponentModel.EditorBrowsableState.Never)]
        [System.Diagnostics.CodeAnalysis.SuppressMessageAttribute("Microsoft.Design", "CA1033:InterfaceMethodsShouldBeCallableByChildTypes")]
        [System.Diagnostics.CodeAnalysis.SuppressMessageAttribute("Microsoft.Maintainability", "CA1502:AvoidExcessiveComplexity")]
        [System.Diagnostics.CodeAnalysis.SuppressMessageAttribute("Microsoft.Performance", "CA1800:DoNotCastUnnecessarily")]
        void System.Windows.Markup.IComponentConnector.Connect(int connectionId, object target) {
            switch (connectionId)
            {
            case 1:
            this.question = ((System.Windows.Controls.TextBlock)(target));
            return;
            case 2:
            this.stack = ((System.Windows.Controls.StackPanel)(target));
            return;
            case 3:
            this.answer1 = ((System.Windows.Controls.CheckBox)(target));
            
            #line 21 "..\..\MathimathicTest.xaml"
            this.answer1.Checked += new System.Windows.RoutedEventHandler(this.Answer1_Checked);
            
            #line default
            #line hidden
            return;
            case 4:
            this.answer2 = ((System.Windows.Controls.CheckBox)(target));
            
            #line 22 "..\..\MathimathicTest.xaml"
            this.answer2.Checked += new System.Windows.RoutedEventHandler(this.Answer1_Checked);
            
            #line default
            #line hidden
            return;
            case 5:
            this.answer3 = ((System.Windows.Controls.CheckBox)(target));
            
            #line 23 "..\..\MathimathicTest.xaml"
            this.answer3.Checked += new System.Windows.RoutedEventHandler(this.Answer1_Checked);
            
            #line default
            #line hidden
            return;
            case 6:
            this.answer4 = ((System.Windows.Controls.CheckBox)(target));
            
            #line 24 "..\..\MathimathicTest.xaml"
            this.answer4.Checked += new System.Windows.RoutedEventHandler(this.Answer1_Checked);
            
            #line default
            #line hidden
            return;
            case 7:
            
            #line 26 "..\..\MathimathicTest.xaml"
            ((System.Windows.Controls.Button)(target)).Click += new System.Windows.RoutedEventHandler(this.Button_Click);
            
            #line default
            #line hidden
            return;
            }
            this._contentLoaded = true;
        }
    }
}
