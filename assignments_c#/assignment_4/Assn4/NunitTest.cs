using NUnit.Framework;
using OpenQA.Selenium;
using OpenQA.Selenium.Firefox;

namespace Assn4
{

        class NUnitTest
        {
            IWebDriver driver;
            [SetUp]
            public void Initialize()
            {
                 driver = new FirefoxDriver();
            }
            
            [Test]
            public void OpenAppTest()
            {
                driver.Url = "https://www.demoqa.com";
            }   
            
            [TearDown]
            public void EndTest()
            {
                driver.Close();
            }
        }
    }
